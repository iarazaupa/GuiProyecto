#include "HijaEditarProducto.h"
#include <wx/msgdlg.h>

void HijaEditarProducto::CargarTabla()
{
	vector<Producto> productos;
	
	if (!m_sistema->ListarProductos(productos))
		return;
	
	// Borro las filas existentes
	if (m_TablaAggProductoAdmin->GetNumberRows() > 0)
		m_TablaAggProductoAdmin->DeleteRows(0, m_TablaAggProductoAdmin->GetNumberRows());
	
	// Agrego las filas necesarias
	m_TablaAggProductoAdmin->AppendRows(productos.size());
	
	cout << "Filas: " << m_TablaAggProductoAdmin->GetNumberRows() << endl;
	cout << "Columnas: " << m_TablaAggProductoAdmin->GetNumberCols() << endl;
	cout << "Productos: " << productos.size() << endl;
	
	// Cargo los datos
	for (size_t i = 0; i < productos.size(); i++)
	{
		cout << "Fila: " << i << endl;
		m_TablaAggProductoAdmin->SetCellValue(i, 0, wxString::Format("%d", productos[i].GetID()));
		m_TablaAggProductoAdmin->SetCellValue(i, 1, wxString(productos[i].GetNombre()));
		
		if (m_TablaAggProductoAdmin->GetNumberCols() > 2)
			m_TablaAggProductoAdmin->SetCellValue(i, 2, wxString(productos[i].GetCategoria()));
		
		if (m_TablaAggProductoAdmin->GetNumberCols() > 3)
			m_TablaAggProductoAdmin->SetCellValue(i, 3, wxString::Format("%.2f", productos[i].GetPrecio()));
		
		if (m_TablaAggProductoAdmin->GetNumberCols() > 4)
			m_TablaAggProductoAdmin->SetCellValue(i, 4, wxString::Format("%d", productos[i].GetStock()));
	}
}


void HijaEditarProducto::CargarCategorias()
{
	m_BoxCategoriaAdmin->Clear();
	
	vector<string> categorias = m_sistema->ObtenerCategorias();
	
	cout << "Cantidad categorias: " << categorias.size() << endl;
	
	for (string categoria : categorias)
	{
		cout << "Cargando categoria: " << categoria << endl;
		m_BoxCategoriaAdmin->Append(categoria);
	}
}

HijaEditarProducto::HijaEditarProducto(Sistema *sistema): BaseEditarProducto(nullptr), m_sistema(sistema)
{
	CargarCategorias();
	CargarTabla();
}



HijaEditarProducto::~HijaEditarProducto() {
	
}





void HijaEditarProducto::ClickEnFila(wxGridEvent& event)
{
	int fila = event.GetRow();
	
	if (fila < 0 || fila >= m_TablaAggProductoAdmin->GetNumberRows())
		return;
	
	m_idProductoSeleccionado = wxAtoi(
									  m_TablaAggProductoAdmin->GetCellValue(fila, 0));
	
	m_TextNomAdmin->SetValue(
							 m_TablaAggProductoAdmin->GetCellValue(fila, 1));
	
	// Categoría (solo si existe la columna)
	// Categoría
	if (m_TablaAggProductoAdmin->GetNumberCols() > 2)
	{
		wxString categoria = m_TablaAggProductoAdmin->GetCellValue(fila, 2);
		
		cout << "Categoria seleccionada: " 
			<< categoria.ToStdString() 
			<< endl;
		
		int indice = m_BoxCategoriaAdmin->FindString(categoria);
		
		if (indice != wxNOT_FOUND)
		{
			// Si la categoría ya existe, la selecciona
			m_BoxCategoriaAdmin->SetSelection(indice);
		}
		else
		{
			// Si no existe, la agrega y la selecciona
			m_BoxCategoriaAdmin->Append(categoria);
			m_BoxCategoriaAdmin->SetSelection(m_BoxCategoriaAdmin->GetCount() - 1);
		}	
	}
	else
	{
		m_BoxCategoriaAdmin->SetSelection(wxNOT_FOUND);
	}
	
	// Precio
	if (m_TablaAggProductoAdmin->GetNumberCols() > 3)
		m_TextPrecioAdmin->SetValue(
									m_TablaAggProductoAdmin->GetCellValue(fila, 3));
	else
		m_TextPrecioAdmin->Clear();
	
	// Stock
	if (m_TablaAggProductoAdmin->GetNumberCols() > 4)
		m_TextStockAdmin->SetValue(
								   m_TablaAggProductoAdmin->GetCellValue(fila, 4));
	else
		m_TextStockAdmin->Clear();
	
	event.Skip();
}


void HijaEditarProducto::ClickBotonGuardar(wxCommandEvent& event)
{
	string nombre = m_TextNomAdmin->GetValue().ToStdString();
	string categoria = m_BoxCategoriaAdmin->GetValue().ToStdString();
	double precio = wxAtof(m_TextPrecioAdmin->GetValue());
	int stock = wxAtoi(m_TextStockAdmin->GetValue());
	
	Producto producto(
					  m_idProductoSeleccionado,
					  nombre,
					  categoria,
					  precio,
					  stock
					  );
	
	if (m_sistema->EditarProducto(producto))
	{
		wxMessageBox("Producto editado correctamente.");
		
		CargarTabla();
		
		m_TextNomAdmin->Clear();
		m_TextPrecioAdmin->Clear();
		m_TextStockAdmin->Clear();
		m_BoxCategoriaAdmin->SetSelection(wxNOT_FOUND);
		
		m_idProductoSeleccionado = -1;
	}
	else
	{
		wxMessageBox("No se pudo editar el producto.");
	}
}

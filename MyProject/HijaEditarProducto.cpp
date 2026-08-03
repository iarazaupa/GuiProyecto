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
		m_TablaAggProductoAdmin->SetCellValue(i, 2, wxString::Format("%.2f", productos[i].GetPrecio()));
		m_TablaAggProductoAdmin->SetCellValue(i, 3, wxString::Format("%d", productos[i].GetStock()));
	}
}

HijaEditarProducto::HijaEditarProducto(Sistema *sistema): BaseEditarProducto(nullptr), m_sistema(sistema)
{
	CargarTabla();
}



HijaEditarProducto::~HijaEditarProducto() {
	
}

void HijaEditarProducto::ClickEnFila(wxGridEvent& event)
{
	int fila = event.GetRow();
	
	m_idProductoSeleccionado = wxAtoi(
									  m_TablaAggProductoAdmin->GetCellValue(fila, 0));
	
	m_TextNomAdmin->SetValue(
							 m_TablaAggProductoAdmin->GetCellValue(fila, 1));
	
	m_TextPrecioAdmin->SetValue(
								m_TablaAggProductoAdmin->GetCellValue(fila, 2));
	
	m_TextStockAdmin->SetValue(
							   m_TablaAggProductoAdmin->GetCellValue(fila, 3));
	
	event.Skip();
}

void HijaEditarProducto::ClickBotonGuardar(wxCommandEvent& event)
{
	string nombre = m_TextNomAdmin->GetValue().ToStdString();
	double precio = wxAtof(m_TextPrecioAdmin->GetValue());
	int stock = wxAtoi(m_TextStockAdmin->GetValue());
	
	// Como no editás la categoría, la dejamos vacía por ahora
	Producto producto(
					  m_idProductoSeleccionado,
					  nombre,
					  "",
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
		
		m_idProductoSeleccionado = -1;
	}
	else
	{
		wxMessageBox("No se pudo editar el producto.");
	}
}


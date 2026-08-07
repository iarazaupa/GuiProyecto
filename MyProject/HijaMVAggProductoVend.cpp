#include "HijaMVAggProductoVend.h"
#include "Venta.h"
#include "Sistema.h"
#include <wx/msgdlg.h>

HijaMVAggProductoVend::HijaMVAggProductoVend(Sistema *sistema, Venta *venta): BaseMVAggProductoVend(nullptr), m_sistema(sistema), m_venta(venta), m_producto(nullptr){
	CargarGrillaProductos();
}

HijaMVAggProductoVend::~HijaMVAggProductoVend()
{
	delete m_producto;
}


void HijaMVAggProductoVend::CargarGrillaProductos ( ) {
	vector<Producto> GrillaStock;
	bool seGuardo = m_sistema->ListarProductos(GrillaStock);
	
	
	for (int i = 0; i < GrillaStock.size(); i++)
	{
		Producto p = GrillaStock[i];
		
		m_TablaAggProductoVend->AppendRows(1);
		m_TablaAggProductoVend->SetCellValue(i, 0, wxString::Format("%d", p.GetID()));
		m_TablaAggProductoVend->SetCellValue(i, 1, wxString(p.GetNombre()));
		m_TablaAggProductoVend->SetCellValue(i, 2, wxString(p.GetCategoria()));
		m_TablaAggProductoVend->SetCellValue(i, 3, wxString::Format("%.2f", p.GetPrecio()));
		m_TablaAggProductoVend->SetCellValue(i, 4, wxString::Format("%d", p.GetStock()));
	}
}


void HijaMVAggProductoVend::ClickEnCelda(wxGridEvent& event)
{
	int fila = event.GetRow();
	
	if (fila < 0 || fila >= m_TablaAggProductoVend->GetNumberRows())
		return;
	
	int idProducto = wxAtoi(
							m_TablaAggProductoVend->GetCellValue(fila, 0)
							);
	
	vector<Producto> productos;
	m_sistema->ListarProductos(productos);
	
	for (int i = 0; i < productos.size(); i++)
	{
		if (productos[i].GetID() == idProducto)
		{
			// Crear una copia que siga existiendo
			m_producto = new Producto(productos[i]);
			break;
		}
	}
	
	m_IDProdVend1->SetValue(
							wxString::Format("%d", idProducto)
							);
	
	event.Skip();
}


///verificacion de producto que funciona
//void HijaMVAggProductoVend::ClickBotonAggProducto(wxCommandEvent& event)
//{
//	if (m_producto == nullptr)
//	{
//		wxMessageBox("No hay ningún producto seleccionado.");
//		return;
//	}
//	
//	m_cantidadCompra = wxAtoi(m_CantidadVend->GetValue());
//	
//	wxString mensaje;
//	
//	mensaje += "ID: " + wxString::Format("%d", m_producto->GetID()) + "\n";
//	mensaje += "Nombre: " + wxString(m_producto->GetNombre()) + "\n";
//	mensaje += "Categoria: " + wxString(m_producto->GetCategoria()) + "\n";
//	mensaje += "Precio: " + wxString::Format("%.2f", m_producto->GetPrecio()) + "\n";
//	mensaje += "Stock: " + wxString::Format("%d", m_producto->GetStock()) + "\n";
//	mensaje += "Cantidad: " + wxString::Format("%d", m_cantidadCompra);
//	
//	wxMessageBox(mensaje, "Producto seleccionado");
//}

void HijaMVAggProductoVend::ClickBotonAggProducto(wxCommandEvent& event)
{
	///aca debe ir la logica para registrar la venta
}

void HijaMVAggProductoVend::BuscarPorCategoria(wxCommandEvent& event)
{
	wxString categoria = m_categoria->GetValue();
	
	// Si está vacío, mostrar todos los productos
	if (categoria.IsEmpty())
	{
		CargarGrillaProductos();
		return;
	}
	
	// Limpiar la tabla
	if (m_TablaAggProductoVend->GetNumberRows() > 0)
	{
		m_TablaAggProductoVend->DeleteRows(0,m_TablaAggProductoVend->GetNumberRows());
	}
	
	vector<Producto> productos;
	m_sistema->ListarProductos(productos);
	
	int fila = 0;
	
	for (int i = 0; i < productos.size(); i++)
	{
		wxString catProducto = productos[i].GetCategoria();
		
		if (catProducto.CmpNoCase(categoria) == 0)
		{
			m_TablaAggProductoVend->AppendRows(1);
			
			m_TablaAggProductoVend->SetCellValue(fila, 0,wxString::Format("%d", productos[i].GetID()));
			
			m_TablaAggProductoVend->SetCellValue(fila, 1, productos[i].GetNombre());
			
			m_TablaAggProductoVend->SetCellValue(fila, 2, productos[i].GetCategoria() );
			
			m_TablaAggProductoVend->SetCellValue(fila, 3,wxString::Format("%.2f", productos[i].GetPrecio()));
			
			m_TablaAggProductoVend->SetCellValue(fila, 4,wxString::Format("%d", productos[i].GetStock()));
			
			fila++;
		}
	}
}


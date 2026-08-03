#include "HijaMenuAdmin.h"
#include "Producto.h"
#include <wx/string.h>
#include "HijaAggClienteAdmin.h"
#include "HijaListClienteAdmin.h"
#include "HijaAggProductoAdmin.h"
#include "HijaListProdAdmin.h"

HijaMenuAdmin::HijaMenuAdmin(Sistema *sistema)
	: BaseMenuAdmin(nullptr), m_sistema(sistema)
{
	vector<Producto> GrillaStockBajo = m_sistema->StockBajo();
	
	for (int i = 0; i < GrillaStockBajo.size(); i++)
	{
		Producto p = GrillaStockBajo[i];
		
		m_gridProductoStockBajo->AppendRows(1);
		m_gridProductoStockBajo->SetCellValue(i, 0, wxString::Format("%d", p.GetID()));
		m_gridProductoStockBajo->SetCellValue(i, 1, wxString(p.GetNombre()));
		m_gridProductoStockBajo->SetCellValue(i, 2, wxString::Format("%.2f", p.GetPrecio()));
		m_gridProductoStockBajo->SetCellValue(i, 3, wxString::Format("%d", p.GetStock()));
	}
}

HijaMenuAdmin::~HijaMenuAdmin() {
	
}

void HijaMenuAdmin::ClickBotonAgregarCliente( wxCommandEvent& event )  {
	HijaAggClienteAdmin *win = new HijaAggClienteAdmin(m_sistema);
	win->Show();
}

void HijaMenuAdmin::ClickBotonVerListaClientes( wxCommandEvent& event )  {
	HijaListClienteAdmin *win = new HijaListClienteAdmin(m_sistema);
	win->Show();
}

void HijaMenuAdmin::ClickBotonAggProducto( wxCommandEvent& event )  {
	HijaAggProductoAdmin *win = new HijaAggProductoAdmin(m_sistema);
	win->Show();
}

void HijaMenuAdmin::ClickBotonListaProductos( wxCommandEvent& event )  {
	HijaListProdAdmin *win = new HijaListProdAdmin(m_sistema);
	win->Show();
}


#include "HijaMenuAdmin.h"
#include "Producto.h"
#include <wx/string.h>
#include "HijaAggClienteAdmin.h"
#include "HijaListClienteAdmin.h"
#include "HijaAggProductoAdmin.h"
#include "HijaListProdAdmin.h"
#include "HijaPrincipal.h"
#include "HijaEditarProducto.h"

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
	
	
	int contadorMeses[12] = {0};
	double totalDineroMeses[12] = {0};
	
	m_sistema->cantidadVentasMes(contadorMeses, totalDineroMeses);
	
	const string nombreMeses[12] = {
		"Enero","Febrero","Marzo","Abril",
			"Mayo","Junio","Julio","Agosto",
			"Septiembre","Octubre","Noviembre","Diciembre"
	};
	
	for (int i = 0; i < 12; i++)
	{
		if (contadorMeses[i] > 0)
		{
			int fila = m_gridVentasDelMes->GetNumberRows();
			
			m_gridVentasDelMes->AppendRows(1);
			
			m_gridVentasDelMes->SetCellValue(fila, 0, wxString::Format("%d", fila + 1));
			m_gridVentasDelMes->SetCellValue(fila, 1, nombreMeses[i]);
			m_gridVentasDelMes->SetCellValue(fila, 2, wxString::Format("%.2f", totalDineroMeses[i]));
		}
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

void HijaMenuAdmin::ClickBotonEditarProducto( wxCommandEvent& event )  {
	HijaEditarProducto *win = new HijaEditarProducto(m_sistema);
	win->Show();
}

void HijaMenuAdmin::ClickBtnMenuPrin( wxCommandEvent& event )  {
	HijaPrincipal *win = new HijaPrincipal(m_sistema);
	win->Show();
	this->Close();
}


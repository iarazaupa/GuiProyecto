#include "HijaStockVend.h"
#include "HijaMenuPrincipalVend.h"
#include "Sistema.h"


HijaStockVend::HijaStockVend(Sistema *sistema) : BaseStockVend(nullptr), m_sistema(sistema) {
	vector<Producto> GrillaStock;
	bool seGuardo = m_sistema->ListarProductos(GrillaStock);
	
	
	for (int i = 0; i < GrillaStock.size(); i++)
	{
		Producto p = GrillaStock[i];
		
		m_TablaStockVend->AppendRows(1);
		m_TablaStockVend->SetCellValue(i, 0, wxString::Format("%d", p.GetID()));
		m_TablaStockVend->SetCellValue(i, 1, wxString(p.GetNombre()));
		m_TablaStockVend->SetCellValue(i, 2, wxString(p.GetCategoria()));
		m_TablaStockVend->SetCellValue(i, 3, wxString::Format("%.2f", p.GetPrecio()));
		m_TablaStockVend->SetCellValue(i, 4, wxString::Format("%d", p.GetStock()));
	}
}

HijaStockVend::~HijaStockVend() {
	
}

void HijaStockVend::ClickBotonVolverStockVend( wxCommandEvent& event )  {
	HijaMenuPrincipalVend *win = new HijaMenuPrincipalVend(nullptr);
	win->Show();
	Close();
}


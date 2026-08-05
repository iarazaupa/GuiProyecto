#include "HijaMenuPrincipalVend.h"
#include "HijaAggClienteVend.h"
#include "HijaVentaVend.h"
#include "HijaStockVend.h"
#include "HijaModificarCliente.h"
#include "HijaPrincipal.h"

HijaMenuPrincipalVend::HijaMenuPrincipalVend(Sistema *sistema) : BaseMenuPrincipalVend(nullptr), m_sistema(sistema) {
	
	vector<Cliente> clientes;
	
	if (m_sistema->ListarClientes(clientes)) {
		
		for (int i = 0; i < clientes.size(); i++) {
			
			m_TablaClientesVend->AppendRows(1);
			
			m_TablaClientesVend->SetCellValue(i, 0, wxString::Format("%d", clientes[i].GetID()));
			m_TablaClientesVend->SetCellValue(i, 1, clientes[i].getNombre());
			m_TablaClientesVend->SetCellValue(i, 2, clientes[i].getTelefono());
		}
	}
}

HijaMenuPrincipalVend::~HijaMenuPrincipalVend() {
	
}

void HijaMenuPrincipalVend::ClickBotonAggClienteVend( wxCommandEvent& event )  {
	HijaAggClienteVend *win = new HijaAggClienteVend(nullptr);
	win->Show();
}

void HijaMenuPrincipalVend::ClickBotonVenderVend( wxCommandEvent& event )  {
	HijaVentaVend *win = new HijaVentaVend(m_sistema);
	win->Show();
}

void HijaMenuPrincipalVend::ClickBotonStockVend( wxCommandEvent& event )  {
	HijaStockVend *win = new HijaStockVend(nullptr);
	win->Show();
	this->Hide();
}

void HijaMenuPrincipalVend::ClickBotonModifClienteVend( wxCommandEvent& event )  {
	HijaModificarCliente *win = new HijaModificarCliente(nullptr);
	win->Show();
	
}

void HijaMenuPrincipalVend::ClickBotonVolverVend( wxCommandEvent& event )  {
	HijaPrincipal *win = new HijaPrincipal(nullptr);
	win->Show();
	Close();
}


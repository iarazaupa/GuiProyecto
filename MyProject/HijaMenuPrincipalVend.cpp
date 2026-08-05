#include "HijaMenuPrincipalVend.h"
#include "HijaAggClienteVend.h"
#include "HijaVentaVend.h"
#include "HijaStockVend.h"
#include "HijaModificarCliente.h"
#include "HijaPrincipal.h"

HijaMenuPrincipalVend::HijaMenuPrincipalVend(Sistema *sistema) : BaseMenuPrincipalVend(nullptr), m_sistema(sistema) {
	
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


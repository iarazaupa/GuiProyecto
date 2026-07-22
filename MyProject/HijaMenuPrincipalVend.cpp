#include "HijaMenuPrincipalVend.h"
#include "HijaAggClienteVend.h"
#include "HijaVentaVend.h"

HijaMenuPrincipalVend::HijaMenuPrincipalVend(wxWindow *parent) : BaseMenuPrincipalVend(parent) {
	
}

HijaMenuPrincipalVend::~HijaMenuPrincipalVend() {
	
}

void HijaMenuPrincipalVend::ClickBotonAggClienteVend( wxCommandEvent& event )  {
	HijaAggClienteVend *win = new HijaAggClienteVend(nullptr);
	win->Show();
	
}

void HijaMenuPrincipalVend::ClickBotonVenderVend( wxCommandEvent& event )  {
	HijaVentaVend *win = new HijaVentaVend(nullptr);
	win->Show();
}


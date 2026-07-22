#include "HijaPrincipal.h"
#include "HijaMenuPrincipalVend.h"
#include "HijaAdministradorContrasenia.h"

HijaPrincipal::HijaPrincipal(wxWindow *parent) : BasePrincipal(parent) {
	
}

HijaPrincipal::~HijaPrincipal() {
	
}

void HijaPrincipal::ClickBotonVendedor( wxCommandEvent& event )  {
	HijaMenuPrincipalVend *win = new HijaMenuPrincipalVend(nullptr);
	win->Show();
	
	this->Hide();
}

void HijaPrincipal::ClickBotonAdministrador( wxCommandEvent& event )  {
	HijaAdministradorContrasenia *win = new HijaAdministradorContrasenia(this);
	win->Show();

}


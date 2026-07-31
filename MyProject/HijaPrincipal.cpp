#include "HijaPrincipal.h"
#include "HijaMenuPrincipalVend.h"
#include "HijaAdministradorContrasenia.h"
#include "Sistema.h"

HijaPrincipal::HijaPrincipal(Sistema *sistema) : BasePrincipal(nullptr), m_sistema(sistema){
	
}

HijaPrincipal::~HijaPrincipal() {
	
}

void HijaPrincipal::ClickBotonVendedor( wxCommandEvent& event )  {
	HijaMenuPrincipalVend *win = new HijaMenuPrincipalVend(nullptr);
	win->Show();
	
	this->Hide();
}

void HijaPrincipal::ClickBotonAdministrador( wxCommandEvent& event )  {
	HijaAdministradorContrasenia *win = new HijaAdministradorContrasenia(m_sistema);
	win->Show();

}


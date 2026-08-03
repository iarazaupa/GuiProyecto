#include "HijaAdministradorContrasenia.h"
#include <wx/msgdlg.h>
#include "HijaMenuAdmin.h"



HijaAdministradorContrasenia::HijaAdministradorContrasenia(Sistema *sistema)
	: BaseAdministradorContrasenia(nullptr), m_sistema(sistema)
{
	m_botonIngresarAdmin->SetDefault();
}



HijaAdministradorContrasenia::~HijaAdministradorContrasenia() {
	
}

void HijaAdministradorContrasenia::ClickBotonIngresar( wxCommandEvent& event )  {
	
	std::string password = m_textIngreseContraseniaAdmin->GetValue().ToStdString();
	
	if (m_sistema->verificarPassword(password))
	{
		HijaMenuAdmin *win = new HijaMenuAdmin(m_sistema);
		win->Show();
		wxMessageBox("Contraseña correcta");
		this->Hide();
		
	}
	else
	{
		wxMessageBox("Contraseña incorrecta");
	}
	
}


#include "HijaModificarCliente.h"
#include <wx/string.h>
#include <wx/msgdlg.h>

HijaModificarCliente::HijaModificarCliente(HijaMenuPrincipalVend *menuVend, Sistema *sistema, long dni) : BaseModificarCliente(nullptr), m_menuVend(menuVend), m_sistema(sistema) {
	Cliente c = m_sistema->BuscarCliente(dni);
	
	m_TextDniCliente->SetLabel(wxString::Format("%ld", c.GetID()));
	m_TextModifNombreCliente->SetValue(c.getNombre());
	m_TextModifEmailCliente->SetValue(c.getEmail());
	m_TextModifTelefonoCliente->SetValue(c.getTelefono());
	
}

HijaModificarCliente::~HijaModificarCliente() {
	
}

void HijaModificarCliente::ClickBotonModificarCliente( wxCommandEvent& event )  {
	int dni = wxAtoi(m_TextDniCliente->GetLabel());
	wxString nombre = m_TextModifNombreCliente->GetValue();
	wxString email = m_TextModifEmailCliente->GetValue();
	wxString telefono = m_TextModifTelefonoCliente->GetValue();
	
	if (nombre.IsEmpty() || email.IsEmpty() || telefono.IsEmpty()) {
		wxMessageBox("Complete todos los campos");
		return;
	}
	
	bool modificado = m_sistema->ModificarCliente(dni,nombre.ToStdString(),email.ToStdString(),telefono.ToStdString());
	
	if (!modificado) {
		wxMessageBox("El Cliente no se pudo modificar");
		return;
	}
	
	wxMessageBox("Cliente modificado correctamente");
	m_menuVend->CargarClientes();
	
	Close();
}


#include "HijaAggClienteAdmin.h"
#include "Sistema.h"
#include <wx/msgdlg.h>

HijaAggClienteAdmin::HijaAggClienteAdmin(Sistema *sistema) : BaseAggClienteAdmin(nullptr), m_sistema(sistema) {
	
}

HijaAggClienteAdmin::~HijaAggClienteAdmin() {
	
}

void HijaAggClienteAdmin::ClickBtnAggClienteAdmin(wxCommandEvent& event)
{
	wxString dni = m_textDNIAggClienteVend->GetValue();
	wxString nombre = m_textNomAggClienteAdmin->GetValue();
	wxString email = m_textEmailAggClienteVend->GetValue();
	wxString telefono = m_textTelAggClienteAdmin->GetValue();
	
	if (dni.IsEmpty() || nombre.IsEmpty() || email.IsEmpty() || telefono.IsEmpty())
	{
		wxMessageBox("Complete todos los campos");
		return;
	}
	
	int id = wxAtoi(dni);
	
	bool agregado = m_sistema->agregarCliente(id , nombre.ToStdString(),email.ToStdString(),telefono.ToStdString());
	
	if (!agregado)
	{
		wxMessageBox("Ya existe un cliente con ese DNI");
		return;
	}
	
	wxMessageBox("Cliente agregado correctamente");
	
	m_textDNIAggClienteVend->Clear();
	m_textNomAggClienteAdmin->Clear();
	m_textEmailAggClienteVend->Clear();
	m_textTelAggClienteAdmin->Clear();
}

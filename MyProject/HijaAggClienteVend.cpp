#include "HijaAggClienteVend.h"
#include <wx/msgdlg.h>

HijaAggClienteVend::HijaAggClienteVend(Sistema *sistema) : BaseAggClienteVend(nullptr), m_sistema(sistema) {
	
}

HijaAggClienteVend::~HijaAggClienteVend() {
	
}

void HijaAggClienteVend::ClickBtnAggClienteVend(wxCommandEvent& event)
{
	wxString dni = m_textDNIAggClienteVend->GetValue();
	wxString nombre = m_textNomAggClienteVend->GetValue();
	wxString email = m_textEmailAggClienteVend->GetValue();
	wxString telefono = m_textTelAggClienteVend->GetValue();
	
	if (dni.IsEmpty() || nombre.IsEmpty() || email.IsEmpty() || telefono.IsEmpty())
	{
		wxMessageBox("Complete todos los campos");
		return;
	}
	
	int id = wxAtoi(dni);
	
	bool agregado = m_sistema->agregarCliente(id,nombre.ToStdString(),email.ToStdString(),telefono.ToStdString());
	
	if (!agregado)
	{
		wxMessageBox("Ya existe un cliente con ese DNI");
		return;
	}
	
	wxMessageBox("Cliente agregado correctamente");
	
	m_textDNIAggClienteVend->Clear();
	m_textNomAggClienteVend->Clear();
	m_textEmailAggClienteVend->Clear();
	m_textTelAggClienteVend->Clear();
}


#include "HijaTicketActualVend.h"

HijaTicketActualVend::HijaTicketActualVend(wxWindow *parent, Venta* venta) : BaseTicketActual(parent) {
	if (venta != NULL) {
		
		m_textVentaID->SetLabel(wxString::Format("%d", venta->GetID()));
		
		if (venta->GetCliente() != NULL) {
			m_textCliente->SetLabel(wxString::FromUTF8(venta->GetCliente()->getNombre().c_str()));
		}
	}
}


HijaTicketActualVend::~HijaTicketActualVend() {
	
}


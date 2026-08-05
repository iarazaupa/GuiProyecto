#include "HijaVentaVend.h"
#include "Sistema.h"
#include <wx/msgdlg.h>
#include "HijaMenuVentaVend.h"
#include "wxfb_project.h"

HijaVentaVend::HijaVentaVend(Sistema *sistema) : BaseVentaVend(nullptr),  m_sistema(sistema) {
	
}

HijaVentaVend::~HijaVentaVend() {
	
}

void HijaVentaVend::ClickBotonBuscar(wxCommandEvent& event)
{
	int idCliente = wxAtoi(m_TextoVentaVend->GetValue());
	
	if (idCliente <= 0)
	{
		wxMessageBox("Ingrese un ID válido.");
		return;
	}
	
	// Si querés guardarlo para usarlo después
	m_idCliente = idCliente;
	
	// Acá hacés la búsqueda
	if (m_sistema->verificarDniVenta(idCliente))
	{
		HijaMenuVentaVend* ventana = new HijaMenuVentaVend(m_sistema, m_idCliente);
		ventana->Show();
		Close();
	}
	else
	{
		wxMessageBox("No existe un cliente con ese ID.");
	}
}

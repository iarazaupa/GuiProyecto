#include "HijaMenuVentaVend.h"
#include "HijaMVAggProductoVend.h"
#include "Venta.h"
#include "HijaTicketActualVend.h"
#include "HijaMVQuitarProd.h"
#include <wx/msgdlg.h>
#include "HijaVentaConfirmadaVend.h"

HijaMenuVentaVend::HijaMenuVentaVend(Sistema *sistema, int idCliente): BaseMenuVentaVend(nullptr), m_sistema(sistema), m_idCliente(idCliente){
	m_sistema->ActualizarProductos();
	m_cliente = m_sistema->BuscarCliente(idCliente);
	int idVenta = static_cast<int>(m_sistema->VerVentas().size()) + 1;
	m_nombreCliente->SetLabel(m_cliente.getNombre());
	m_venta = new Venta(idVenta, &m_cliente);
	
	m_BotonConfVentaMenuVentaVend->Bind(wxEVT_BUTTON, &HijaMenuVentaVend::ClickBotonConfirmarVenta, this);
}

HijaMenuVentaVend::~HijaMenuVentaVend() {
	delete m_venta;
}

void HijaMenuVentaVend::ClickBotonAggProducto( wxCommandEvent& event )  {
	HijaMVAggProductoVend* ventana = new HijaMVAggProductoVend(m_sistema,m_venta);
	ventana->Show();
}

void HijaMenuVentaVend::ClickBotonQuitProductoMenuVentaVendOnButtonClick( wxCommandEvent& event )  {
	HijaMVQuitarProd *win = new HijaMVQuitarProd(m_sistema,m_venta);
	win->Show();
}

void HijaMenuVentaVend::ClickBotonTicket( wxCommandEvent& event ) {
	HijaTicketActualVend ventana(this, m_venta);
	ventana.ShowModal();
}

void HijaMenuVentaVend::ClickBotonConfirmarVenta( wxCommandEvent& event ) {
	if (m_venta->GetDetalles().empty()) {
		wxMessageBox("Agregue al menos un producto antes de confirmar la venta.");
		return;
	}
	
	m_sistema->ConfirmarVenta(*m_venta);
	m_sistema->ActualizarProductos();
	
	HijaVentaConfirmadaVend ventana(this, m_venta);
	ventana.ShowModal();
	
	Close();
}

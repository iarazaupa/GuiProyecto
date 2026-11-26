#include "HijaMenuVentaVend.h"
#include "HijaMVAggProductoVend.h"
#include "Venta.h"
#include "HijaTicketActualVend.h"

HijaMenuVentaVend::HijaMenuVentaVend(Sistema *sistema, int idCliente): BaseMenuVentaVend(nullptr), m_sistema(sistema), m_idCliente(idCliente){
	m_cliente = m_sistema->BuscarCliente(idCliente);
	int idVenta = static_cast<int>(m_sistema->VerVentas().size()) + 1;
	m_nombreCliente->SetLabel(m_cliente.getNombre());
	m_venta = new Venta(idVenta, &m_cliente);
}

HijaMenuVentaVend::~HijaMenuVentaVend() {
	delete m_venta;
}

void HijaMenuVentaVend::ClickBotonAggProducto( wxCommandEvent& event )  {
	HijaMVAggProductoVend* ventana = new HijaMVAggProductoVend(m_sistema,m_venta);
	ventana->Show();
}

void HijaMenuVentaVend::ClickBotonQuitProductoMenuVentaVendOnButtonClick( wxCommandEvent& event )  {
	event.Skip();
}

void HijaMenuVentaVend::ClickBotonTicket( wxCommandEvent& event ) {
	HijaTicketActualVend* ventana = new HijaTicketActualVend(this);
	ventana->Show();
}


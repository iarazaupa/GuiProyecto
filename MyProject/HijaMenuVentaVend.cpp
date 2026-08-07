#include "HijaMenuVentaVend.h"
#include "HijaMVAggProductoVend.h"
#include "Venta.h"

HijaMenuVentaVend::HijaMenuVentaVend(Sistema *sistema, int idCliente): BaseMenuVentaVend(nullptr), m_sistema(sistema), m_idCliente(idCliente){
	Cliente cliente = sistema->BuscarCliente(idCliente);
	int idVenta = 1;
	m_venta = new Venta(idVenta, &cliente);
}

HijaMenuVentaVend::~HijaMenuVentaVend() {
	
}

void HijaMenuVentaVend::ClickBotonAggProducto( wxCommandEvent& event )  {
	HijaMVAggProductoVend* ventana = new HijaMVAggProductoVend(m_sistema,m_venta);
	ventana->Show();
}


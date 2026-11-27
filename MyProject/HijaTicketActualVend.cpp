#include "HijaTicketActualVend.h"

HijaTicketActualVend::HijaTicketActualVend(wxWindow *parent, Venta* venta) : BaseTicketActual(parent) {
	if (venta == nullptr) return;
	
	venta->CalcularTotal();
	m_textVentaID->SetLabel(wxString::Format("%d", venta->GetID()));
	
	if (venta->GetCliente() != nullptr) {
		m_textCliente->SetLabel(wxString::FromUTF8(venta->GetCliente()->getNombre().c_str()));
	}
	
	wxString productos, cantidades, precios, subtotales;
	vector<DetalleVenta> detalles = venta->GetDetalles();
	
	for (size_t i = 0; i < detalles.size(); i++) {
		Producto* p = detalles[i].GetProducto();
		if (p == nullptr) continue;
		
		if (!productos.IsEmpty()) {
			productos += "\n";
			cantidades += "\n";
			precios += "\n";
			subtotales += "\n";
		}
		
		productos  += wxString(p->GetNombre());
		cantidades += wxString::Format("%d", detalles[i].GetCantidad());
		precios    += wxString::Format("$%.2f", p->GetPrecio());
		subtotales += wxString::Format("$%.2f", detalles[i].CalcularSubtotal());
	}
	
	m_textProducto->SetLabel(productos.IsEmpty() ? "-" : productos);
	m_textCantidad->SetLabel(cantidades.IsEmpty() ? "0" : cantidades);
	m_textPrecioUnitario->SetLabel(precios.IsEmpty() ? "$0.00" : precios);
	m_textSubtotal->SetLabel(subtotales.IsEmpty() ? "$0.00" : subtotales);
	m_textFecha->SetLabel(venta->ObtenerFechaActual());
	m_textTotal->SetLabel(wxString::Format("$%.2f", venta->Gettotal()));
	
	Layout();
	GetSizer()->Fit(this);
	Centre();
}

HijaTicketActualVend::~HijaTicketActualVend() {
	
}


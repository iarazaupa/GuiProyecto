#include "HijaVentaConfirmadaVend.h"
#include "wxfb_project.h"
#include "Venta.h"


HijaVentaConfirmadaVend::HijaVentaConfirmadaVend(wxWindow *parent, Venta *venta) : BaseVentaConfirmadaVend(parent) {
	m_MenuPrincipalVConf->Bind(wxEVT_BUTTON, [this](wxCommandEvent&) {
		EndModal(wxID_OK);
	});
	
	if (venta == nullptr) return;
	
	m_textVentaConfID->SetLabel(wxString::Format("%d", venta->GetID()));
	
	if (venta->GetCliente() != nullptr) {
		m_textClienteConf->SetLabel(wxString::FromUTF8(venta->GetCliente()->getNombre().c_str()));
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
	
	m_textProductoConf->SetLabel(productos);
	m_textCantidadConf->SetLabel(cantidades);
	m_textPrecioUnitarioConf->SetLabel(precios);
	m_textSubtotalConf->SetLabel(subtotales);
	m_textFechaConf->SetLabel(venta->Getfecha());
	m_textTotalConf->SetLabel(wxString::Format("$%.2f", venta->Gettotal()));
	
	Layout();
	GetSizer()->Fit(this);
	Centre();
}

HijaVentaConfirmadaVend::~HijaVentaConfirmadaVend() {
	
}


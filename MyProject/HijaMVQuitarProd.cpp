#include "HijaMVQuitarProd.h"
#include "wxfb_project.h"
#include "Venta.h"
#include "Sistema.h"
#include "Producto.h"
#include <wx/msgdlg.h>

HijaMVQuitarProd::HijaMVQuitarProd(Sistema *sistema, Venta *venta) : BaseMVQuitarProd(nullptr),m_sistema(sistema),m_venta(venta){
	CargarGrilla();
}

HijaMVQuitarProd::~HijaMVQuitarProd() {
	
}

void HijaMVQuitarProd::CargarGrilla() {
	if (m_TablaQuitarProdVend->GetNumberRows() > 0) {
		m_TablaQuitarProdVend->DeleteRows(0, m_TablaQuitarProdVend->GetNumberRows());
	}
	
	if (m_venta == nullptr) return;
	
	vector<DetalleVenta> detalles = m_venta->GetDetalles();
	
	for(size_t i=0;i<detalles.size();i++) { 
		Producto *p = detalles[i].GetProducto();
		if (p == nullptr) continue;
		
		int fila = m_TablaQuitarProdVend->GetNumberRows();
		m_TablaQuitarProdVend->AppendRows(1);
		
		m_TablaQuitarProdVend->SetCellValue(fila, 0, wxString::Format("%d", p->GetID()));
		m_TablaQuitarProdVend->SetCellValue(fila, 1, wxString(p->GetNombre()));
		m_TablaQuitarProdVend->SetCellValue(fila, 2, wxString::Format("%.2f", p->GetPrecio()));
		m_TablaQuitarProdVend->SetCellValue(fila, 3, wxString::Format("%d", detalles[i].GetCantidad()));
	}
	
}

void HijaMVQuitarProd::ClickEnCelda( wxGridEvent& event )  {
	int fila = event.GetRow();
	if (fila < 0 || fila >= m_TablaQuitarProdVend->GetNumberRows()) return;
	
	m_textIDQuitarProdVend->SetValue(m_TablaQuitarProdVend->GetCellValue(fila, 0));
	event.Skip();
}

void HijaMVQuitarProd::ClickBotonEliminar( wxCommandEvent& event )  {
	long idProducto = 0;
	long cantidad = 0;
	
	if (!m_textIDQuitarProdVend->GetValue().ToLong(&idProducto) ||
		!m_textCantQuitarProdVend->GetValue().ToLong(&cantidad) ||
		idProducto <= 0 || cantidad <= 0) {
		wxMessageBox("Ingrese un ID y una cantidad válidos mayores a 0.");
		return;
	}
	
	if (m_sistema->QuitarProductoDeVenta(*m_venta, static_cast<int>(idProducto), static_cast<int>(cantidad))) {
		wxMessageBox("Producto quitado de la venta.");
		m_textIDQuitarProdVend->Clear();
		m_textCantQuitarProdVend->Clear();
		CargarGrilla();
	} else {
		wxMessageBox("No se pudo quitar: verifique que el producto esté en la venta y que la cantidad no supere la actual.");
	}
}


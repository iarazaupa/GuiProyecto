#include "HijaQuitarProductoAdmin.h"
#include <wx/msgdlg.h>

HijaQuitarProductoAdmin::HijaQuitarProductoAdmin(Sistema *sistema) : BaseQuitarProductoAdmin(nullptr), m_sistema(sistema), m_idProductoSeleccionado(-1) {
	m_GridQuitarProducAdmin->EnableEditing(false);
	CargarTabla();
}

HijaQuitarProductoAdmin::~HijaQuitarProductoAdmin() {
	
}

void HijaQuitarProductoAdmin::CargarTabla() {
	if (m_GridQuitarProducAdmin->GetNumberRows() > 0) {
		m_GridQuitarProducAdmin->DeleteRows(0, m_GridQuitarProducAdmin->GetNumberRows());
	}
	
	if (m_sistema == nullptr) return;
	
	vector<Producto> productos;
	m_sistema->ListarProductos(productos);
	
	for (size_t i = 0; i < productos.size(); i++) {
		int fila = m_GridQuitarProducAdmin->GetNumberRows();
		m_GridQuitarProducAdmin->AppendRows(1);
		
		m_GridQuitarProducAdmin->SetCellValue(fila, 0, wxString::Format("%d", productos[i].GetID()));
		m_GridQuitarProducAdmin->SetCellValue(fila, 1, wxString(productos[i].GetNombre()));
	}
}

void HijaQuitarProductoAdmin::ClickEnCelda(wxGridEvent& event) {
	int fila = event.GetRow();
	if (fila < 0 || fila >= m_GridQuitarProducAdmin->GetNumberRows()) return;
	
	m_idProductoSeleccionado = wxAtoi(m_GridQuitarProducAdmin->GetCellValue(fila, 0));
	event.Skip();
}

void HijaQuitarProductoAdmin::ClickBotonEliminar(wxCommandEvent& event) {
	if (m_sistema == nullptr) return;
	
	if (m_idProductoSeleccionado == -1) {
		wxMessageBox("Seleccione un producto de la tabla.");
		return;
	}
	
	int respuesta = wxMessageBox(wxString::FromUTF8("¿Seguro que desea eliminar el producto seleccionado?"),"Confirmar",
								 wxYES_NO | wxICON_QUESTION);
	
	if (respuesta != wxYES) return;
	
	if (m_sistema->QuitarProductoAdmin(m_idProductoSeleccionado)) {
		m_sistema->ActualizarProductos();
		m_idProductoSeleccionado = -1;
		CargarTabla();
		wxMessageBox("Producto eliminado correctamente.");
	} else {
		wxMessageBox("No se pudo eliminar el producto.");
	}
}

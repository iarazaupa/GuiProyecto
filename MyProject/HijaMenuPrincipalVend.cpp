#include "HijaMenuPrincipalVend.h"
#include "HijaAggClienteVend.h"
#include "HijaVentaVend.h"
#include "HijaStockVend.h"
#include "HijaModificarCliente.h"
#include "HijaPrincipal.h"
#include <wx/msgdlg.h>

HijaMenuPrincipalVend::HijaMenuPrincipalVend(Sistema *sistema) : BaseMenuPrincipalVend(nullptr),m_sistema(sistema), m_filaSeleccionada(-1) {
	CargarClientes();
	m_TextoMenuPVend->SetHint("Ingrese DNI del cliente");
}

HijaMenuPrincipalVend::~HijaMenuPrincipalVend() {
	
}

void HijaMenuPrincipalVend::CargarClientes() {
	if (m_TablaClientesVend->GetNumberRows() > 0)
		m_TablaClientesVend->DeleteRows(0,m_TablaClientesVend->GetNumberRows());
	
	vector<Cliente> clientes;
	
	if (m_sistema->ListarClientes(clientes)) {
		
		for (int i = 0; i < clientes.size(); i++) {
			
			m_TablaClientesVend->AppendRows(1);
			
			m_TablaClientesVend->SetCellValue(i, 0, wxString::Format("%d", clientes[i].GetID()));
			m_TablaClientesVend->SetCellValue(i, 1, clientes[i].getNombre());
			m_TablaClientesVend->SetCellValue(i, 2, clientes[i].getTelefono());
		}
	}
}

void HijaMenuPrincipalVend::ClickBotonAggClienteVend( wxCommandEvent& event )  {
	HijaAggClienteVend *win = new HijaAggClienteVend(nullptr);
	win->Show();
}

void HijaMenuPrincipalVend::ClickBotonVenderVend( wxCommandEvent& event )  {
	HijaVentaVend *win = new HijaVentaVend(m_sistema);
	win->Show();
}

void HijaMenuPrincipalVend::ClickBotonStockVend( wxCommandEvent& event )  {
	HijaStockVend *win = new HijaStockVend(nullptr);
	win->Show();
	this->Hide();
}

void HijaMenuPrincipalVend::ClickEnFila(wxGridEvent& event) {
	m_filaSeleccionada = event.GetRow();
	event.Skip();
}

void HijaMenuPrincipalVend::ClickBotonModifClienteVend(wxCommandEvent& event) {
	if (m_filaSeleccionada == -1) {
		wxMessageBox("Seleccione un cliente");
		return;
	}
	
	long dni;
	m_TablaClientesVend->GetCellValue(m_filaSeleccionada, 0).ToLong(&dni);
	
	HijaModificarCliente *win = new HijaModificarCliente(this, m_sistema, dni);
	win->Show();
}

void HijaMenuPrincipalVend::ClickBotonVolverVend( wxCommandEvent& event )  {
	HijaPrincipal *win = new HijaPrincipal(nullptr);
	win->Show();
	Close();
}


void HijaMenuPrincipalVend::FiltrarClientes( wxCommandEvent& event )  {
	wxString texto = m_TextoMenuPVend->GetValue();
	
	// Eliminar cualquier carácter que no sea un número
	wxString soloNumeros;
	
	for (int i = 0; i < texto.Length(); i++) {
		if (wxIsdigit(texto[i]))
			soloNumeros += texto[i];
	}
	
	// Si había letras o símbolos, actualizar el TextCtrl
	if (soloNumeros != texto) {
		m_TextoMenuPVend->SetValue(soloNumeros);
		m_TextoMenuPVend->SetInsertionPointEnd();
		return;
	}
	
	// Si está vacío, mostrar todos los clientes
	if (texto.IsEmpty()) {
		CargarClientes();
		return;
	}
	
	// Limpiar la tabla
	m_TablaClientesVend->DeleteRows(0, m_TablaClientesVend->GetNumberRows());
	
	vector<Cliente> clientes;
	m_sistema->ListarClientes(clientes);
	
	int fila = 0;
	
	for (int i = 0; i < clientes.size(); i++) {
		wxString dni = wxString::Format("%d", clientes[i].GetID());
		
		if (dni.StartsWith(texto))
		{
			m_TablaClientesVend->AppendRows(1);
			
			m_TablaClientesVend->SetCellValue(fila, 0, dni);
			m_TablaClientesVend->SetCellValue(fila, 1, clientes[i].getNombre());
			m_TablaClientesVend->SetCellValue(fila, 2, clientes[i].getTelefono());
			
			fila++;
		}
	}
}


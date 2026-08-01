#include "HijaListClienteAdmin.h"
#include "Sistema.h"

HijaListClienteAdmin::HijaListClienteAdmin(Sistema *sistema) : BaseListClienteAdmin(nullptr), m_sistema(sistema) {
	vector<Cliente> clientes;
	bool seLleno = m_sistema->ListarClientes(clientes);
	
	for (int i = 0; i < clientes.size(); i++)
	{
		Cliente c = clientes[i];
		
		m_GridListClienteAdmin->AppendRows(1);
		m_GridListClienteAdmin->SetCellValue(i, 0, wxString::Format("%d", c.GetID()));
		m_GridListClienteAdmin->SetCellValue(i, 1, wxString(c.getNombre()));
		m_GridListClienteAdmin->SetCellValue(i, 2, wxString(c.getTelefono()));
	}
}

HijaListClienteAdmin::~HijaListClienteAdmin() {
	
}


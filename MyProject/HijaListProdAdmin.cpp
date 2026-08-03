#include "HijaListProdAdmin.h"
#include "Sistema.h"

HijaListProdAdmin::HijaListProdAdmin(Sistema *sistema) : BaseListProdAdmin(nullptr), m_sistema(sistema) {
	vector<Producto> productos;
	bool seLleno = m_sistema->ListarProductos(productos);
	
	for (int i = 0; i < productos.size(); i++)
	{
		Producto p = productos[i];
		
		m_GridListProdAdmin->AppendRows(1);
		m_GridListProdAdmin->SetCellValue(i, 0, wxString::Format("%d", p.GetID()));
		m_GridListProdAdmin->SetCellValue(i, 1, wxString(p.GetNombre()));
		m_GridListProdAdmin->SetCellValue(i, 2, wxString(p.GetCategoria()));
		m_GridListProdAdmin->SetCellValue(i, 3, wxString::Format("%.2f", p.GetPrecio()));
		m_GridListProdAdmin->SetCellValue(i, 4, wxString::Format("%d", p.GetStock()));
	}
}

HijaListProdAdmin::~HijaListProdAdmin() {
	
}


#include "HijaMenuAdmin.h"
#include "Producto.h"
#include <wx/string.h>

HijaMenuAdmin::HijaMenuAdmin(Sistema *sistema)
	: BaseMenuAdmin(nullptr), m_sistema(sistema)
{
	vector<Producto> GrillaStockBajo = m_sistema->StockBajo();
	
	for (int i = 0; i < GrillaStockBajo.size(); i++)
	{
		Producto p = GrillaStockBajo[i];
		
		m_gridProductoStockBajo->AppendRows(1);
		m_gridProductoStockBajo->SetCellValue(i, 0, wxString::Format("%d", p.GetID()));
		m_gridProductoStockBajo->SetCellValue(i, 1, wxString(p.GetNombre()));
		m_gridProductoStockBajo->SetCellValue(i, 2, wxString::Format("%.2f", p.GetPrecio()));
		m_gridProductoStockBajo->SetCellValue(i, 3, wxString::Format("%d", p.GetStock()));
	}
}

HijaMenuAdmin::~HijaMenuAdmin() {
	
}


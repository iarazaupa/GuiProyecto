#include "HijaVentasAdmin.h"

HijaVentasAdmin::HijaVentasAdmin(Sistema *sistema)
	: BaseVentasAdmin(nullptr), m_sistema(sistema)
{
	m_GridVentasAdmin->EnableEditing(false);
	
	if (m_GridVentasAdmin->GetNumberRows() > 0) {
		m_GridVentasAdmin->DeleteRows(0, m_GridVentasAdmin->GetNumberRows());
	}
	
	vector<Venta> ventas = m_sistema->VerVentas();
	
	for (size_t i = 0; i < ventas.size(); i++) {
		int fila = m_GridVentasAdmin->GetNumberRows();
		m_GridVentasAdmin->AppendRows(1);
		
		vector<string> nombres = ventas[i].GetNombresProductos();
		vector<int> cantidades = ventas[i].GetCantidadesProductos();
		
		wxString strProductos, strCantidades;
		for (size_t j = 0; j < nombres.size(); j++) {
			if (j > 0) {
				strProductos += ", ";
				strCantidades += ", ";
			}
			strProductos += wxString(nombres[j]);
			if (j < cantidades.size()) {
				strCantidades += wxString::Format("%d", cantidades[j]);
			}
		}
		
		m_GridVentasAdmin->SetCellValue(fila, 0, wxString::Format("%d", ventas[i].GetID()));
		m_GridVentasAdmin->SetCellValue(fila, 1, strProductos.IsEmpty() ? "Sin productos" : strProductos);
		m_GridVentasAdmin->SetCellValue(fila, 2, strCantidades.IsEmpty() ? "0" : strCantidades);
		m_GridVentasAdmin->SetCellValue(fila, 3, wxString::Format("$%.2f", ventas[i].Gettotal()));
		m_GridVentasAdmin->SetCellValue(fila, 4, wxString(ventas[i].Getfecha()));
	}
	
	m_GridVentasAdmin->AutoSizeColumns();
}

HijaVentasAdmin::~HijaVentasAdmin() {
	
}

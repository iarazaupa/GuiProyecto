#include "HijaAggProductoAdmin.h"
#include "Sistema.h"
#include <wx/msgdlg.h>

HijaAggProductoAdmin::HijaAggProductoAdmin(Sistema *sistema) : BaseAggProductoAdmin(nullptr), m_sistema(sistema) {
	vector<string> categorias = m_sistema->ObtenerCategorias();
	
	for(int i=0;i<categorias.size();i++) { 
		m_BoxCategorias->Append(categorias[i]);
	}
	
}

HijaAggProductoAdmin::~HijaAggProductoAdmin() {
	
}

void HijaAggProductoAdmin::ClickBotonAgg( wxCommandEvent& event )  {
	
	string categ = m_BoxCategorias->GetStringSelection().ToStdString();
	
	string nombre = m_TextNombreAdmin->GetValue().ToStdString();
	long id;
	double precio;
	long stock; 
	
	//verificaciones
	bool okID = m_TextIDProducAdmin->GetValue().ToLong(&id);
	bool okPrecio = m_TextoPrecioAdmin->GetValue().ToDouble(&precio);
	bool okStock = m_TextStockAdmin->GetValue().ToLong(&stock);
	
	if (!okID || !okStock || !okPrecio) {
		wxMessageBox("Ingrese valores numericos validos");
		return;
	}
	
	bool seGuardo = false;
	
	seGuardo = m_sistema->AgregarProductoAdmin(id,stock,nombre,categ,precio);
	
	if (!seGuardo) {
		wxMessageBox("No se pudo agregar el producto");
		return;
	}
	
	wxMessageBox("Producto agregado correctamente");
}


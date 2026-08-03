#ifndef HIJAMENUADMIN_H
#define HIJAMENUADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuAdmin : public BaseMenuAdmin {
	
private:
	Sistema *m_sistema;
	vector<Producto> m_stockBajo;
protected:
	void ClickBtnMenuPrin( wxCommandEvent& event )  override;
	void ClickBotonEditarProducto( wxCommandEvent& event )  override;
	void ClickBotonListaProductos( wxCommandEvent& event )  override;
	void ClickBotonAggProducto( wxCommandEvent& event )  override;
	void ClickBotonVerListaClientes( wxCommandEvent& event )  override;
	void ClickBotonAgregarCliente( wxCommandEvent& event )  override;
	
public:
	HijaMenuAdmin(Sistema *Sistema);
	~HijaMenuAdmin();
};

#endif


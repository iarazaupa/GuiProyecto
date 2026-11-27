#ifndef HIJAMENUVENTAVEND_H
#define HIJAMENUVENTAVEND_H
#include "wxfb_project.h"
#include "Sistema.h"
#include "Cliente.h"

class HijaMenuVentaVend : public BaseMenuVentaVend {
	
private:
	Sistema *m_sistema;
	int m_idCliente;
	Cliente m_cliente;
	Venta *m_venta;
protected:
	void ClickBotonConfirmarVenta( wxCommandEvent& event )  override;
	void ClickBotonQuitProductoMenuVentaVendOnButtonClick( wxCommandEvent& event )  override;
	void ClickBotonTicket( wxCommandEvent& event )  override;
	void ClickBotonAggProducto( wxCommandEvent& event )  override;
	
public:
	HijaMenuVentaVend(Sistema *sistema, int idCliente);
	~HijaMenuVentaVend();
	
};

#endif


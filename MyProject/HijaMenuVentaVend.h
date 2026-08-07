#ifndef HIJAMENUVENTAVEND_H
#define HIJAMENUVENTAVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuVentaVend : public BaseMenuVentaVend {
	
private:
	Sistema *m_sistema;
	int m_idCliente;
	Venta *m_venta;
protected:
	void ClickBotonAggProducto( wxCommandEvent& event )  override;
	
public:
	HijaMenuVentaVend(Sistema *sistema, int idCliente);
	~HijaMenuVentaVend();
};

#endif


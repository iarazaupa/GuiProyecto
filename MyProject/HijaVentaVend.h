#ifndef HIJAVENTAVEND_H
#define HIJAVENTAVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaVentaVend : public BaseVentaVend {
	
private:
	Sistema *m_sistema;
	int m_idCliente;
protected:
	void ClickBotonBuscar( wxCommandEvent& event )  override;
	
public:
	HijaVentaVend(Sistema *sistema);
	~HijaVentaVend();
};

#endif


#ifndef HIJAAGGCLIENTEVEND_H
#define HIJAAGGCLIENTEVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaAggClienteVend : public BaseAggClienteVend {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBtnAggClienteVend( wxCommandEvent& event )  override;
	
public:
	HijaAggClienteVend(Sistema *sistema);
	~HijaAggClienteVend();
};

#endif


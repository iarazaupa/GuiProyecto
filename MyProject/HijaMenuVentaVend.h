#ifndef HIJAMENUVENTAVEND_H
#define HIJAMENUVENTAVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuVentaVend : public BaseMenuVentaVend {
	
private:
	Sistema *m_sistema;
protected:
	
public:
	HijaMenuVentaVend(Sistema *sistema, int idCliente);
	~HijaMenuVentaVend();
};

#endif


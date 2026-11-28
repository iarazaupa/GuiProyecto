#ifndef HIJAVENTASADMIN_H
#define HIJAVENTASADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaVentasAdmin : public BaseVentasAdmin {
	
private:
	Sistema *m_sistema;
protected:
	
public:
	HijaVentasAdmin(Sistema *sistema);
	~HijaVentasAdmin();
};

#endif

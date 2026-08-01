#ifndef HIJAAGGCLIENTEADMIN_H
#define HIJAAGGCLIENTEADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaAggClienteAdmin : public BaseAggClienteAdmin {
	
private:
	Sistema *m_sistema;
protected:
	
public:
	HijaAggClienteAdmin(Sistema *sistema);
	~HijaAggClienteAdmin();
};

#endif


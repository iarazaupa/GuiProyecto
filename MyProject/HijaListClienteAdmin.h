#ifndef HIJALISTCLIENTEADMIN_H
#define HIJALISTCLIENTEADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"
#include "HijaListClienteAdmin.h"

class HijaListClienteAdmin : public BaseListClienteAdmin {
	
private:
	Sistema *m_sistema;
protected:
	
public:
	HijaListClienteAdmin(Sistema *sistema);
	~HijaListClienteAdmin();
};

#endif


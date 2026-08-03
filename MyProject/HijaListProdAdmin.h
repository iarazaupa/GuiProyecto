#ifndef HIJALISTPRODADMIN_H
#define HIJALISTPRODADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaListProdAdmin : public BaseListProdAdmin {
	
private:
	Sistema *m_sistema;
protected:
	
public:
	HijaListProdAdmin(Sistema *sistema);
	~HijaListProdAdmin();
};

#endif


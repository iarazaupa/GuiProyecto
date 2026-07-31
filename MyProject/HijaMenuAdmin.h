#ifndef HIJAMENUADMIN_H
#define HIJAMENUADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuAdmin : public BaseMenuAdmin {
	
private:
	Sistema *m_sistema;
	vector<Producto> m_stockBajo;
protected:
	
public:
	HijaMenuAdmin(Sistema *Sistema);
	~HijaMenuAdmin();
};

#endif


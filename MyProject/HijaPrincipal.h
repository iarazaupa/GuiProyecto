#ifndef HIJAPRINCIPAL_H
#define HIJAPRINCIPAL_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaPrincipal : public BasePrincipal {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBotonAdministrador( wxCommandEvent& event )  override;
	void ClickBotonVendedor( wxCommandEvent& event )  override;
	
public:
	HijaPrincipal(Sistema *Sistema);
	~HijaPrincipal();
};

#endif


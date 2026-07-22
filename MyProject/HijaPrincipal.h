#ifndef HIJAPRINCIPAL_H
#define HIJAPRINCIPAL_H
#include "wxfb_project.h"

class HijaPrincipal : public BasePrincipal {
	
private:
	
protected:
	void ClickBotonAdministrador( wxCommandEvent& event )  override;
	void ClickBotonVendedor( wxCommandEvent& event )  override;
	
public:
	HijaPrincipal(wxWindow *parent=NULL);
	~HijaPrincipal();
};

#endif


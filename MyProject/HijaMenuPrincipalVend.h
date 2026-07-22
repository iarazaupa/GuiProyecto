#ifndef HIJAMENUPRINCIPALVEND_H
#define HIJAMENUPRINCIPALVEND_H
#include "wxfb_project.h"

class HijaMenuPrincipalVend : public BaseMenuPrincipalVend {
	
private:
	
protected:
	void ClickBotonVenderVend( wxCommandEvent& event )  override;
	void ClickBotonAggClienteVend( wxCommandEvent& event )  override;
	
public:
	HijaMenuPrincipalVend(wxWindow *parent=NULL);
	~HijaMenuPrincipalVend();
};

#endif


#ifndef HIJAMENUPRINCIPALVEND_H
#define HIJAMENUPRINCIPALVEND_H
#include "wxfb_project.h"

class HijaMenuPrincipalVend : public BaseMenuPrincipalVend {
	
private:
	
protected:
	void ClickBotonVolverVend( wxCommandEvent& event )  override;
	void ClickBotonStockVend( wxCommandEvent& event )  override;
	void ClickBotonModifClienteVend( wxCommandEvent& event )  override;
	void ClickBotonVenderVend( wxCommandEvent& event )  override;
	void ClickBotonAggClienteVend( wxCommandEvent& event )  override;
	
public:
	HijaMenuPrincipalVend(wxWindow *parent=NULL);
	~HijaMenuPrincipalVend();
};

#endif


#ifndef HIJAMENUPRINCIPALVEND_H
#define HIJAMENUPRINCIPALVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuPrincipalVend : public BaseMenuPrincipalVend {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBotonVolverVend( wxCommandEvent& event )  override;
	void ClickBotonStockVend( wxCommandEvent& event )  override;
	void ClickBotonModifClienteVend( wxCommandEvent& event )  override;
	void ClickBotonVenderVend( wxCommandEvent& event )  override;
	void ClickBotonAggClienteVend( wxCommandEvent& event )  override;
	
public:
	HijaMenuPrincipalVend(Sistema *m_sistema);
	~HijaMenuPrincipalVend();
};

#endif


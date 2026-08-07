#ifndef HIJAMENUPRINCIPALVEND_H
#define HIJAMENUPRINCIPALVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaMenuPrincipalVend : public BaseMenuPrincipalVend {
	
private:
	Sistema *m_sistema;
	int m_filaSeleccionada;
protected:
	void FiltrarClientes( wxCommandEvent& event )  override;
	void ClickBotonVolverVend( wxCommandEvent& event )  override;
	void ClickBotonStockVend( wxCommandEvent& event )  override;
	void ClickBotonModifClienteVend( wxCommandEvent& event )  override;
	void ClickBotonVenderVend( wxCommandEvent& event )  override;
	void ClickBotonAggClienteVend( wxCommandEvent& event )  override;
	void ClickEnFila(wxGridEvent& event) override;
	
public:
	void CargarClientes();
	HijaMenuPrincipalVend(Sistema *m_sistema);
	~HijaMenuPrincipalVend();
};

#endif


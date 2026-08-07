#ifndef HIJAMODIFICARCLIENTE_H
#define HIJAMODIFICARCLIENTE_H
#include "wxfb_project.h"
#include "HijaModificarCliente.h"
#include "Sistema.h"
#include "HijaMenuPrincipalVend.h"

class HijaModificarCliente : public BaseModificarCliente {
	
private:
	Sistema *m_sistema;
	HijaMenuPrincipalVend *m_menuVend;
protected:
	void ClickBotonModificarCliente( wxCommandEvent& event )  override;
	
public:
	HijaModificarCliente(HijaMenuPrincipalVend *parent, Sistema *sistema, long dni);
	~HijaModificarCliente();
};

#endif


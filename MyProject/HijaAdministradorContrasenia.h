#ifndef HIJAADMINISTRADORCONTRASENIA_H
#define HIJAADMINISTRADORCONTRASENIA_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaAdministradorContrasenia : public BaseAdministradorContrasenia {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBotonIngresar( wxCommandEvent& event )  override;
	
public:
	HijaAdministradorContrasenia(Sistema *Sistema);
	~HijaAdministradorContrasenia();
};

#endif


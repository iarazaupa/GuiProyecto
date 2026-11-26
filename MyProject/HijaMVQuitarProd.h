#ifndef HIJAMVQUITARPROD_H
#define HIJAMVQUITARPROD_H
#include "wxfb_project.h"
#include "Venta.h"
#include "Sistema.h"

class HijaMVQuitarProd : public BaseMVQuitarProd {
	
private:
	Sistema *m_sistema;
	Venta *m_venta;
protected:
	void ClickEnCelda( wxGridEvent& event )  override;
	void ClickBotonEliminar( wxCommandEvent& event )  override;
	
public:
	HijaMVQuitarProd(Sistema *sistema, Venta *venta);
	void CargarGrilla();
	~HijaMVQuitarProd();
};

#endif


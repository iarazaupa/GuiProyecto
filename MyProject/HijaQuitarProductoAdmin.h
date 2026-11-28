#ifndef HIJAQUITARPRODUCTOADMIN_H
#define HIJAQUITARPRODUCTOADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaQuitarProductoAdmin : public BaseQuitarProductoAdmin {
	
private:
	Sistema *m_sistema;
	int m_idProductoSeleccionado;
	void CargarTabla();
protected:
	void ClickEnCelda(wxGridEvent& event) override;
	void ClickBotonEliminar(wxCommandEvent& event) override;
public:
	HijaQuitarProductoAdmin(Sistema *sistema);
	~HijaQuitarProductoAdmin();
};

#endif


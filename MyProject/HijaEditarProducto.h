#ifndef HIJAEDITARPRODUCTO_H
#define HIJAEDITARPRODUCTO_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaEditarProducto : public BaseEditarProducto {
	
private:
	Sistema *m_sistema;
	int m_idProductoSeleccionado = -1;
protected:
	void ClickBotonGuardar( wxCommandEvent& event )  override;
	void ClickEnFila( wxGridEvent& event )  override;
	
public:
	HijaEditarProducto(Sistema *sistema);
	void CargarCategorias();
	void CargarTabla();
	
	~HijaEditarProducto();
};

#endif


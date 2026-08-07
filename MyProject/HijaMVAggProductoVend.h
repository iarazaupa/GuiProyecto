#ifndef HIJAMVAGGPRODUCTOVEND_H
#define HIJAMVAGGPRODUCTOVEND_H
#include "wxfb_project.h"
#include "Sistema.h"
#include "Producto.h"

class HijaMVAggProductoVend : public BaseMVAggProductoVend {
	
private:
	Sistema *m_sistema;
	Venta *m_venta;
	Producto* m_producto;
	int m_cantidadCompra;
protected:
	void BuscarPorCategoria( wxCommandEvent& event )  override;
	void ClickEnCelda( wxGridEvent& event )  override;
	void ClickBotonAggProducto( wxCommandEvent& event )  override;
	
public:
	HijaMVAggProductoVend(Sistema *sistema, Venta *venta);
	void CargarGrillaProductos();
	~HijaMVAggProductoVend();
};

#endif




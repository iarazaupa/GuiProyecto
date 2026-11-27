#include "DetalleVenta.h"
#include <sstream>
#include <iomanip>


DetalleVenta::DetalleVenta (Producto * producto, int cantidad) {
	if (producto != nullptr) {
		m_producto = *producto;
		m_valido = true;
	} else {
		m_valido = false;
	}
	m_cantidad = cantidad;
}

Producto* DetalleVenta::GetProducto ( ) {
	return m_valido ? &m_producto : nullptr;
}

int DetalleVenta::GetCantidad ( ) {
	return m_cantidad;
}

double DetalleVenta::CalcularSubtotal () {
	if (!m_valido)
		return 0.0;
	return m_producto.GetPrecio() * m_cantidad;
}

string DetalleVenta::Mostrar() {
	if (!m_valido)
		return "Detalle de venta sin producto";
	
	stringstream ss;
	ss << fixed << setprecision(2);
	ss << "Producto: " << m_producto.GetNombre() << "\n";
	ss << "Cantidad: " << m_cantidad << "\n";
	ss << "Precio unitario: $" << m_producto.GetPrecio() << "\n";
	ss << "Subtotal: $" << CalcularSubtotal();
	return ss.str();
}

bool DetalleVenta::DisminuirCantidad(int cantidad) {
	if (cantidad <= m_cantidad) {
		m_cantidad -= cantidad;
		return true;
	}
	
	return false;
}

void DetalleVenta::SetCantidad (int cantidad) {
	m_cantidad = cantidad;
}



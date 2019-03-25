/* Ejercicio 6
Una tienda ha puesto en oferta la venta de un producto ofreciendo un determinado porcentaje
de descuento sobre el importe de la compra. Elabore un programa en C++ que determine el
importe de la compra, el importe del descuento y el importe a pagar por la compra de cierta
cantidad de unidades del producto.*/

#include "pch.h"
#include <iostream>

using namespace std;

/*
Test 1
  porcentajeDescuento=100
  precioProducto=15

Test 2
  porcentajeDescuento=50
  precioProducto=200

*/
int ejercicio6() {
	//Entrada
	int cantProductos;
	double porcentajeDescuento, precioUnitarioProducto;
	double importeCompra, importeDescuento, importePagar;

	//Restricciones
	/*
	-porcentajeDescuento < 100
	-precioUnitarioProducto > 0
	-cantProductos>=1
	*/

	//Lógica
	cout << "Ingrese precio del producto:" << endl;
	cin >> precioUnitarioProducto;
	cout << "Ingrese porcentaje descuento:" << endl;
	cin >> porcentajeDescuento;
	cout << "Ingrese cantidad de productos:" << endl;
	cin >> cantProductos;
	
	importeCompra = cantProductos * precioUnitarioProducto;
	importeDescuento = importeCompra * porcentajeDescuento/100;
	importePagar = importeCompra - importeDescuento;

	//Salida
	cout << "El descuento es :" << importeDescuento << endl;
	cout << "El importe de compra es:" << importeCompra << endl;
	cout << "El importe a pagar es:" << importePagar << endl;

	return 0;
}
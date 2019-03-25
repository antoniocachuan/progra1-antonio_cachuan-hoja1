/* Ejercicio 5
Elabore un programa en C++ para una empresa de ventas de piezas de automóviles, que
determine el precio al que debe vender una pieza considerando un porcentaje de ganancia. Para
ello se leerán el precio de compra de la pieza y el porcentaje de ganancia que desea obtener la
empresa en tanto por ciento.
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  precioCompraPieza=100
  porcentajeGanancia=100

Test 2
  precioCompraPieza=24
  porcentajeGanancia=40

*/
int ejercicio5() {
	//Entrada
	float precioCompraPieza, porcentajeGanancia;
	float precioVenta;

	//Restricciones
	/*
	precioCompraPieza > 0
	porcentajeGanancia > 0
	porcentajeGanancia está en porcentaje
	*/

	//Lógica
	cout << "Ingrese precio de compra de la Pieza:" << endl;
	cin >> precioCompraPieza;
	cout << "Ingrese porcenataje de ganancia:" << endl;
	cin >> porcentajeGanancia;

	precioVenta = precioCompraPieza + precioCompraPieza * porcentajeGanancia / 100;

	//Salida
	cout << "EL precio de venta es: " << precioVenta;

	return 0;
}
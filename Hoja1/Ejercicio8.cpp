/* Ejercicio 7
Elabore un programa en C++ que calcule el sueldo bruto, el descuento por ESSALUD, el
descuento por AFP y el sueldo neto del empleado de una empresa de acuerdo a los siguientes
criterios: el sueldo bruto se calcula multiplicando el número de horas trabajadas por una tarifa
horaria, el descuento por ESSALUD es igual al 9% del sueldo bruto, el descuento por AFP es
igual al 11.5% del sueldo bruto, el sueldo neto es la diferencia entre el sueldo bruto y el
descuento total
*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  tarifaHora=12
  horasTrabajadas=2

Test 2
  tarifaHora=11
  horasTrabajadas=200

*/
int ejercicio8() {
	//Entrada
	double sueldoBruto, descuentoEssalud, descuentoAfp, sueldoNeto;
	double horasTrabajadas, tarifaHora;

	const double cteEssalud = 0.09;
	const double cteAfp = 0.115;

	//Restricciones
	/*
	-Horas del trabajador > 0
	-Tarifa Horas trabajadas > 0
	*/

	//Lógica
	cout << "Ingrese el sueldo por hora del trabajador:" << endl;
	cin >> tarifaHora;
	cout << "Ingrese el total de horas trabajadas:" << endl;
	cin >> horasTrabajadas;
	
	sueldoBruto = tarifaHora * horasTrabajadas;

	descuentoEssalud = sueldoBruto * cteEssalud;
	descuentoAfp = sueldoBruto * cteAfp;

	sueldoNeto = sueldoBruto - (descuentoEssalud + descuentoAfp);
	
	//Salida
	cout << "Sueldo bruto:" << sueldoBruto << endl << "Descuento ESSALUD :" << descuentoEssalud << endl << "Descuento AFP :" << descuentoAfp << endl;
	cout << "Sueldo neto :" << sueldoNeto;
	
	return 0;
}
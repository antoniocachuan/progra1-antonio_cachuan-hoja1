/* Ejercicio 7
El c�lculo del pago mensual de un empleado de una empresa se efect�a de la siguiente manera:
el sueldo b�sico se calcula en base al n�mero total de horas trabajadas basado en una tarifa
horaria; al sueldo b�sico, se le aplica una bonificaci�n del 18% del mismo obteni�ndose el
sueldo bruto; al sueldo bruto, se le aplica un descuento del 12% obteni�ndose el sueldo neto.
Elabore un programa en C++ que calcule e imprima el sueldo b�sico, el sueldo bruto y el sueldo
neto de un trabajador.*/

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

int ejercicio7() {
	//Entrada
	int tarifaHoraria, horasTrabajadas;
	double sueldoBasico, sueldoBruto, sueldoNeto;

	const double cteBonificacion = 0.18;
	const double cteDescuento = 0.12;

	//Restricciones
	/*
	-Horas del trabajador > 0
	-Tarifa Horas trabajadas > 0
	*/

	//L�gica
	cout << "Ingresar la tarifa horaria:" << endl;
	cin >> tarifaHoraria;

	cout << "Ingrese el total de horas trabajadas:" << endl;
	cin >> horasTrabajadas;

	sueldoBasico = tarifaHoraria * horasTrabajadas;
	sueldoBruto = sueldoBasico + sueldoBasico * cteBonificacion;
	sueldoNeto = sueldoBruto - sueldoBruto * cteDescuento;

	cout << "Sueldo b�sico :" << sueldoBasico << endl;
	cout << "Sueldo bruto :" << sueldoBruto << endl;
	cout << "Sueldo neto :" << sueldoNeto << endl;

	return 0;
}
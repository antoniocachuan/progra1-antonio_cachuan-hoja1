/* Ejercicio 10
Se requiere determinar el tiempo que tarda una persona en llegar de una ciudad a otra en
bicicleta, considerando que lleva una velocidad constante. Elabore un programa en C++ que
permita resolver el problema.*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
Test 1
  distanciaKm=100
  velocidadKm=10

Test 2
  distanciaKm=12
  velocidadKm=3

*/
int ejercicio10() {
	//Entrada
	double distanciaKm, velocidadKm;
	double tiempo;

	//Restricciones
	/*
	-distancia > 0 y entero	
	-velocidad > 0 y entero
	-velocidad constante en km/h
	-velocidad y distancia en la misma magnitud (KM)
	*/

	//Lógica
	cout << "Ingrese la velocidad en km/h:" << endl;
	cin >> velocidadKm;
	cout << "Ingrese la distancia en km:" << endl;
	cin >> distanciaKm;

	tiempo = distanciaKm / velocidadKm;

	//Salida
	cout << "Horas a demorar :" << tiempo;
	
	return 0;
}
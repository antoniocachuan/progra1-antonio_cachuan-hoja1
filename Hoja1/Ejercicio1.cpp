// Ejercicio1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ejercicio 1

#include "pch.h"
#include <iostream>

using namespace std;

int ejercicio1()
{
	int horaEntrada;
	int horaSalida;

	cin >> horaEntrada;
	cin >> horaSalida;

	int pago = 0;
	int horaParqueo = (horaSalida - horaEntrada) / 100;
	cout << "Hora Parqueo " << horaParqueo;
	int mExtra = (horaSalida - horaEntrada) % 100;
	cout << "\nminutosExtra " << mExtra;
	int horaRestante = horaParqueo - 1;

	if (horaParqueo > 1) {
		pago = 10 + (horaRestante * 6);
	}
	if (horaParqueo == 1 || (mExtra > 0 && horaParqueo == 0)) {
		pago = 10;
	}
	if (mExtra > 0 && horaParqueo >= 1) {
		pago = pago + 6;
	}

	cout << "Monto a pagar " << pago;

	return 0;
}

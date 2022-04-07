#pragma once

#include "CPila.h"

class decimalToBinary
{
private:
	int decimal;
	CPila pila;
public:
	decimalToBinary();
	~decimalToBinary();

	void conversion();
	void mostrarPila();
	void imprimirBinario();

	void setDecimal(int valor);
	int getDecimal();
};


#include <iostream>
#include "decimalToBinary.h"

using namespace std;

decimalToBinary::decimalToBinary() {
	int decimal = 0;
}
decimalToBinary::~decimalToBinary() {}

void decimalToBinary::conversion() {
	pila = CPila(); //Reiniciar el objero "pila"

	for (int i = 0; i < pila.getMAX(); i++){
		if (decimal == 0) {
			pila.Push(-1);
			continue;
		}
	
		pila.Push(decimal % 2);
        decimal /= 2;
    }
}
void decimalToBinary::mostrarPila() {
	pila.mostarDatos();
}
void decimalToBinary::imprimirBinario() {
	int binario;

	for (int i = 0; i < pila.getMAX(); i++) {
		binario = pila.Pop();

		if (binario != -1) 
			cout << binario;	
	}
}

void decimalToBinary::setDecimal(int valor) {
	decimal = valor;
}
int decimalToBinary::getDecimal() {
	return decimal;
}
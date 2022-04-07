#include <iostream>
#include "CPila.h"

using namespace std;

CPila::CPila() {
	tope = -1;
}

bool CPila::pilaVacia() {
	return tope == -1;
}

bool CPila::pilaLlena() {
	return tope >= MAX-1;
}

void CPila::Push(int lvalue) {
	if (!pilaLlena()){
		tope++;
		valores[tope] = lvalue;
		cout << "DATO INSERTADO: " << lvalue << endl;
	}
	else{
		cout << "PILA LLENA... \n";
	}
}

int CPila::Pop() {
	int aux = NULL;

	if (!pilaLlena()) {
		aux = valores[tope];
		valores[tope] = 0;
		tope--;
	}
	else {
		aux = valores[MAX-1];
		valores[MAX-1] = 0;
		tope--;
	}

	return aux;
}

int CPila::getTope() {
	return tope;
}
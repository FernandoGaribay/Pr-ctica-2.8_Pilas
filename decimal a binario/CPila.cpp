#include <iostream>
#include "CPila.h"

using namespace std;

CPila::CPila() {
	tope = -1;

	for (int i = 0; i < MAX; i++)
		valores[i] = 0;
}
CPila::~CPila() {}

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
		//cout << "DATO INSERTADO: " << lvalue << endl;
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

int CPila::getMAX() {
	return MAX;
}

void CPila::mostarDatos() {
	for (int i = 0; i < MAX; i++) {
		if(valores[i] != -1)
			cout << "Posicion " << i << ": " << valores[i] << endl;
	}
}


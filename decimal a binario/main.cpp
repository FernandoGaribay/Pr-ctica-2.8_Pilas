#include <iostream>
#include "decimalToBinary.h"

using namespace std;

int main(void)
{
    int decimal;
    decimalToBinary obj = decimalToBinary();

    cout << "Dijite un numero a convertir: ";
    cin >> decimal;

    cout << "\nobj.setDecimal(" << decimal << "); " << endl;
    obj.setDecimal(decimal);

    cout << "obj.conversion();" << endl;
    obj.conversion();

    cout << "\nDATOS DE LA PILA: " << endl;
    obj.mostrarPila();

    cout << "\nSACAMOS LOS DATOS DE LA PILA (pop): " << endl;
    cout << "Binario (sin valores nulos): "; 
    obj.imprimirBinario();
    cout << endl;

    cout << "\nDATOS DE LA PILA: " << endl;
    obj.mostrarPila();

    return 0;
}
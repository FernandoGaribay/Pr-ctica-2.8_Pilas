#include <iostream>
#include "CPila.h"

using namespace std;

int main(void)
{
    int dato1,dato2,dato3,dato4,dato5,dato6,dato7,dato8,dato9,dato10,dato11,dato12;
    CPila pila = CPila();

    pila.Push(1);
    pila.Push(2);
    pila.Push(3);
    pila.Push(4);
    pila.Push(5);
    pila.Push(6);
    pila.Push(7);
    pila.Push(8);
    pila.Push(9);
    pila.Push(10);

    pila.Push(11);
    pila.Push(12);
    cout << "Tope: " << pila.getTope() << endl;

    dato1 = pila.Pop();
    dato2 = pila.Pop();
    dato3 = pila.Pop();
    dato4 = pila.Pop();
    dato5 = pila.Pop();
    dato6 = pila.Pop();
    dato7 = pila.Pop();
    dato8 = pila.Pop();
    dato9 = pila.Pop();
    dato10 = pila.Pop();
    dato11 = pila.Pop();
    dato12 = pila.Pop();

    cout << "\nDato sacado 1: " << dato1 << endl;
    cout << "Dato sacado 2: " << dato2 << endl;
    cout << "Dato sacado 3: " << dato3 << endl;
    cout << "Dato sacado 4: " << dato4 << endl;
    cout << "Dato sacado 5: " << dato5 << endl;
    cout << "Dato sacado 6: " << dato6 << endl;
    cout << "Dato sacado 7: " << dato7 << endl;
    cout << "Dato sacado 8: " << dato8 << endl;
    cout << "Dato sacado 9: " << dato9 << endl;
    cout << "Dato sacado 10: " << dato10 << endl;
    cout << "Dato sacado 11: " << dato11 << endl;
    cout << "Dato sacado 12: " << dato12 << endl;

    cout << "\nPila vacia: " << pila.pilaVacia() << endl;
    return 0;
}
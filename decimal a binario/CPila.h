#pragma once
class CPila
{
private:
    static const int MAX = 10;
    int tope;
    int valores[MAX];
public:
    CPila();
    bool pilaVacia();
    bool pilaLlena();
    void Push(int v);
    int Pop();

    int getTope();
};


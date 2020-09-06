#include "funcalc.h"

int SumarNumeros(int primerNumero, int segundoNumero)
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}
int RestarNumeros(int primerNumero, int segundoNumero)
{
    int restar;
    restar = primerNumero - segundoNumero;
    return restar;
}
int MultiplicarNumeros(int primerNumero, int segundoNumero)
{
    int multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}
float DividirNumeros(int primerNumero, int segundoNumero)
{
    float dividir;
    dividir = (float)primerNumero / segundoNumero;
    return dividir;
}
int CalcularFactorial(int numero)
{
    int factorial;
    if(numero == 0)
    {
        factorial = 1;
    }
    else
    {
         factorial = numero * CalcularFactorial(numero - 1);
    }
    return factorial;
}

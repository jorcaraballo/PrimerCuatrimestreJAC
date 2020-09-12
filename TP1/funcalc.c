#include "funcalc.h"

float SumarNumeros(float primerNumero, float segundoNumero)
{
    float suma;
    suma = primerNumero + segundoNumero;
    return suma;
}
float RestarNumeros(float primerNumero, float segundoNumero)
{
    float restar;
    restar = primerNumero - segundoNumero;
    return restar;
}
float MultiplicarNumeros(float primerNumero, float segundoNumero)
{
    float multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}
float DividirNumeros(float primerNumero, float segundoNumero)
{
    float dividir;
    dividir = (float)primerNumero / segundoNumero;
    return dividir;
}
float CalcularFactorial(float numero)
{
    float factorial;
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

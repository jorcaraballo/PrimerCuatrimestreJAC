#include "funciones.h"

int CalcularFactorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
         resultado = numero * CalcularFactorial(numero - 1);
    }

    return resultado;

}

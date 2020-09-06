#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int numero;
    int resultado;
    numero = 5;

    resultado = CalcularFactorial(numero);
    printf("El factorial de %d es: %d", numero, resultado);
    return 0;
}

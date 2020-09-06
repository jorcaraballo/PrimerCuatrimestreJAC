#include <stdio.h>
#include <stdlib.h>
#include "funcalc.h"

int main()
{
    int menuSeleccion;
    int operandoUno;
    int operandoDos;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    int factorialUno;
    int factorialDos;

    do
    {
        printf("1. Ingresar 1er operando A=%d\n", operandoUno);
        printf("2. Ingresar 2do operando B=%d\n", operandoDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n\n");
        printf("Elija una opcion: ");
        scanf("%d", &menuSeleccion);

        switch(menuSeleccion)
        {
            case 1:
                printf("Ingrese el primer operando: ");
                scanf("%d", &operandoUno);
            break;
            case 2:
                printf("Ingrese el segundo operando: ");
                scanf("%d", &operandoDos);
                if (operandoDos==0)
                {
                printf("El valor no puede ser 0. Reingrese el segundo operando: ");
                scanf("%d", &operandoDos);
                }
            break;
            case 3:
                suma = SumarNumeros(operandoUno, operandoDos);
                resta = RestarNumeros(operandoUno, operandoDos);
                division = DividirNumeros(operandoUno, operandoDos);
                multiplicacion = MultiplicarNumeros(operandoUno, operandoDos);
                factorialUno  = CalcularFactorial(operandoUno);
                factorialDos  = CalcularFactorial(operandoDos);
                printf("Se realizo el calculo de todas las operaciones\n\n");
            break;
            case 4:
                printf("El resultado de A+B es: %d\n", suma);
                printf("El resultado de A-B es: %d\n", resta);
                printf("El resultado de A/B es: %.2f\n", division);
                printf("El resultado de A*B es: %d\n", multiplicacion);
                printf("El factorial de A es: %d y El factorial de B es: %d\n\n",factorialUno, factorialDos);
            break;
            case 5:
                printf("Gracias por usar nuestro programa, que tenga un buen dia\n");
            break;

        }

    }while(menuSeleccion!=5);

    return 0;
}

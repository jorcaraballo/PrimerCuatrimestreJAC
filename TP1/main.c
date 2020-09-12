#include <stdio.h>
#include <stdlib.h>
#include "funcalc.h"

int main()
{
    int menuSeleccion;
    float operandoUno;
    float operandoDos;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float factorialUno;
    float factorialDos;
    int cargaUno;
    int cargaDos;
    int cargaTres;

    cargaUno=1;
    cargaDos=1;
    cargaTres=1;
    operandoUno=0;
    operandoDos=0;

    do
    {
        printf("\n1. Ingresar 1er operando A=%.2f\n", operandoUno);
        printf("2. Ingresar 2do operando B=%.2f\n", operandoDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n\n");
        printf("Elija una opcion: ");
        scanf("%d", &menuSeleccion);

        switch(menuSeleccion)
        {
            case 1:
                printf("\nIngrese el primer operando: ");
                scanf("%f", &operandoUno);
                cargaUno=2;
                cargaTres=1;
            break;
            case 2:
                printf("\nIngrese el segundo operando: ");
                scanf("%f", &operandoDos);
                cargaDos=2;
                cargaTres=1;
            break;
            case 3:
                if (cargaUno==1 || cargaDos==1)
                {
                    printf("\nPrimero debe cargar los dos operando\n\n");
                }
                else
                {
                    suma = SumarNumeros(operandoUno, operandoDos);
                    resta = RestarNumeros(operandoUno, operandoDos);
                    if (operandoDos==0)
                    {
                        division=0;
                    }
                    else
                    {
                        division = DividirNumeros(operandoUno, operandoDos);
                    }
                    multiplicacion = MultiplicarNumeros(operandoUno, operandoDos);
                    factorialUno  = CalcularFactorial(operandoUno);
                    factorialDos  = CalcularFactorial(operandoDos);
                    printf("\nSe realizo el calculo de todas las operaciones\n\n");
                    cargaTres=2;
                }

            break;
            case 4:
                if (cargaTres==1)
                {
                    printf("\nPrimero debe seleccionar la opcion tres para realizar los calculos de las operaciones\n\n");
                }
                else
                {
                    printf("El resultado de A+B es: %.2f\n", suma);
                    printf("El resultado de A-B es: %.2f\n", resta);
                    if (division==0)
                        {
                        printf("La division no se pudo calcular porque el segundo numero es igual a 0\n");
                        }
                    else
                    {
                        printf("El resultado de A/B es: %.2f\n", division);
                    }
                    printf("El resultado de A*B es: %.2f\n", multiplicacion);
                    printf("El factorial de A es: %.2f y El factorial de B es: %.2f\n\n",factorialUno, factorialDos);
                }
            break;
            case 5:
                printf("Gracias por usar nuestro programa, que tenga un buen dia\n");
            break;
            default:
            printf("\nDebe elegir una opcion del 1 al 5\n\n");
            break;
        }


    }while(menuSeleccion!=5);

    return 0;
}

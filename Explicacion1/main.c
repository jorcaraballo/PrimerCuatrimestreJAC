#include <stdlib.h>
#include "prog.h"
#define T 10
/*
se ingresan 10 números en un array , validar entre 0 y 20
ingresados por el ususario en forma secuencial,
mostrar:

a- La cantidad que coinciden con el numero maximos  y sus indices
b- La cantidad que coinciden con el numero minimo   y sus indices
c- Luego  solo mostrar los elementos con sus indices que superen el numero 10
d- Mostrar el listado de numeros completo.
e- Mostrar los elementos mayores a 17 o menores a 3
f- Mostar el promedio de todos los numeros ingresados
*/

int main()
{
    int numeros[T];
    int maximo;
    int cantidadMaximos;
    int minimo;
    int cantidadMinimos;
    int opcion;

    cantidadMaximos=0;
    cantidadMinimos=0;

    do
    {
        printf("\n\n1. Cargar el array\n");
        printf("2. Mostrar el array\n");
        printf("3. Buscar maxiomos y sus ocurrencias\n");
        printf("4. Buscar minimos y sus ocurrencias\n");
        printf("5. Elementos con sus indices que superen el numero 10\n");
        printf("6. Elementos mayores a 17 o menores a 3\n");
        printf("7. Promedio de todos los numeros ingresados\n");
        printf("10. Salir\n");
        printf("Seleccione opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                CargarNumeros(numeros, T);
            break;
            case 2:
                printf("\nLos numeros cargados son: ");
                MostrarTodos(numeros, T);
            break;
            case 3:
                maximo=CalcularMaximo(numeros, T);
                cantidadMaximos = ContarNumeros(numeros, T, maximo);
                printf("\nLa cantidad de veces que aparece el maximo es: %d\n", cantidadMaximos);
                MostrarIndicesOcurrencia(numeros, T, maximo);
            break;
            case 4:
                minimo=CalcularMinimo (numeros, T);
                cantidadMinimos = ContarNumeros(numeros,T,minimo);
                printf("\nLa cantidad de veces que aparece el minimo es: %d\n", cantidadMinimos);
                MostrarIndicesOcurrencia(numeros, T, minimo);
            break;
            case 5:
                printf("\nLos numeros mayores a 10 cargados son:\n");
                MayoresDiez(numeros, T);
            break;
            case 6:
                printf("\nLos numeros mayores a 17 y menores a 3 cargados son:\n");
                MayorMenor(numeros, T);
            break;
            case 7:
                printf("\nEl promedio de los numero ingresado es:\n");
                PromedioNumeros(numeros, T);
            break;
        }

    } while(opcion!=10);




    return 0;
}

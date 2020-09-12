/*Se ingresan 10 números en un array, validar entre 0 y 20
ingresados por el usuario en forma secuencial, mostrar:
a- La cantidad que coinciden con el números máximos y sus indices.
b- La candidad que coinciden con el número minimo y sus indices
c- Luego solo mostrar los elementos con sus indices que superen el numero 10
d- Mostrar el listado de numero completo
e- Mostrar los elementos mayores a 17 y menores a 3
f- Mostrar el promedio de todos los numeros ingresados
*/

#include <stdio.h>
#include <stdlib.h>
#define T 10

int main()
{
    int numeros[T];
    int i;
    int numeroMaximo;
    int cantidadMaximos;
    int numeroMinimo;
    int cantidadMinimos;

    cantidadMaximos=0;
    cantidadMinimos=0;


    for (i=0; i<T; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i=0; i<T; i++)
    {
        if(i==0 || numeros[i]>numeroMaximo)
        {
            numeroMaximo=numeros[i];
        }
    }

    for (i=0; i<T; i++)
    {
        if(numeros[i]==numeroMaximo)
        {
            cantidadMaximos++;
        }
    }
    printf("\nLa cantidad de veces que aparece el maximo %d\n", cantidadMaximos);

     for (i=0; i<T; i++)
    {
        if(numeros[i]==numeroMaximo)
        {
            printf("%d-",i);
        }
    }

    for (i=0; i<T; i++)
    {
        if(i==0 || numeros[i]<numeroMinimo)
        {
            numeroMinimo=numeros[i];
        }
    }

    for (i=0; i<T; i++)
    {
        if(numeros[i]==numeroMinimo)
        {
            cantidadMinimos++;
        }
    }
    printf("\nLa cantidad de veces que aparece el minimo %d\n", cantidadMinimos);

     for (i=0; i<T; i++)
    {
        if(numeros[i]==numeroMinimo)
        {
            printf("%d-",i);
        }
    }
    return 0;
}

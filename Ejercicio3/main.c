#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[10];
    int i;
    int acumulador;
    int numeroMayor;
    int numeroMenor;
    int numeroPrimero;

    acumulador=0;
    numeroPrimero=0;

    for (i=0; i<10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i=0; i<10; i++)
    {
        acumulador= acumulador+numeros[i];
    }

        for (i=0; i<10; i++)
    {
        if(numeroPrimero==0)
        {
            numeroMenor=numeros[i];
            numeroMayor=numeros[i];
            numeroPrimero=1;
        }
        else
        {
            if(numeroMenor>numeros[i])
            {
                numeroMenor=numeros[i];
            }
            else
            {
                if(numeroMayor<numeros[i])
                {
                    numeroMayor=numeros[i];
                }
            }
        }
    }
    for (i=0; i<10; i++)
    {
        printf("%d\n", numeros[i]);
    }
    printf("El valor acumulado es: %d\n", acumulador);
    printf("El numero menor ingresado es %d\n", numeroMenor);
    printf("El numero mayor ingresado es %d\n", numeroMayor);
}

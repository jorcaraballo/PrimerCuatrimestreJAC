#include "prog.h"

void CargarNumeros(int numeros[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
}

int ContarNumeros(int numeros[], int tam, int dato)
{
    int i;
    int cantidad;
    cantidad = 0;
    for(i=0; i<tam; i++)
    {
        if(numeros[i]==dato)
        {
            cantidad++;
        }
    }
    return cantidad;
}

int CalcularMaximo(int numeros[], int tam)
{
    int i;
    int maximo;
    for(i=0; i<tam; i++)
    {
        if(i==0 || numeros[i]>maximo)
        {
            maximo = numeros[i];
        }
    }

    return maximo;
}

int CalcularMinimo(int numeros[], int tam)
{
    int i;
    int minimo;
    for(i=0; i<tam; i++)
    {
        if(i==0 || numeros[i]<minimo)
        {
            minimo = numeros[i];
        }
    }
    return minimo;
}
void MostrarIndicesOcurrencia (int numeros[], int tam, int dato)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(numeros[i]==dato)
        {
            printf("%d-", i);
        }
    }
}
void MostrarTodos(int numeros[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("%d-",numeros[i]);
    }

}
int MayoresDiez (int numeros[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(numeros[i]>10)
        {
            printf("%d - Indice: %d\n",numeros[i],i);
        }
    }
}
int MayorMenor(int numeros[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(numeros[i]>17 || numeros[i]<3)
        {
            printf("%d-",numeros[i]);
        }
    }
}
int PromedioNumeros(int numeros[], int tam)
{
    int i;
    int promedio;
    int acumulaNumeros;
    acumulaNumeros=0;
    for(i=0; i<tam; i++)
    {
        acumulaNumeros=acumulaNumeros+numeros[i];
    }
        promedio=tam/acumulaNumeros;
        printf("%d", promedio);
    return(promedio);
}


#include "input.h"

int PedirEntero(char texto[], char textoError[], int min, int max)
{
    int datoIngresado;

    printf("%s", texto);
    scanf("%d", &datoIngresado);
    while(ValidarEntero(datoIngresado,min,max)==0)
    {
        printf("%s", textoError);
        scanf("%d", &datoIngresado);
    }

    return datoIngresado;
}

int ValidarEntero(int dato, int min, int max)
{
    int valido;
    valido=1;

    if(dato<min || dato>max)
    {
        valido=0; //falso
    }

    return valido;
}


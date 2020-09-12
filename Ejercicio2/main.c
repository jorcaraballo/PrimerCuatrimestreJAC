
#include <stdlib.h>
#include "input.h"

int main()
{
    int legajo;
    int edad;
    int nota;
    int codigoPostal;

    legajo=PedirEntero("Ingrese Legajo: ", "Error, reingrese legajo: ",  1, 5000);
    edad=PedirEntero("Ingrese la edad: ", "Error, reingrese edad: ", 18, 100);
    nota=PedirEntero("Ingrese nota: ", "Error, reingrese nota: ", 1, 10);
    codigoPostal=PedirEntero("Ingrese codigo postal: ", "Error, reingrese codigo postal: ", 1000, 2000);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
/*nombre:german ezequiel
apellido:scarafilo
no se pueden tocar

apellidoNombre -> Scarafilo, German Ezequiel */

    char nombre[20];
    char apellido[20];
    char apellidoNombre[41];
    char buffer[128];
    char buffer2[128];
    int i;
    int len;

    //printf("%d\n", isspace(' ');
    //otras funciones: isdigit (si es un valor numerico) - isalpha (dice si es un caracter numerico)

    printf("Ingrese sus nombres: ");
    fflush(stdin);
    gets(buffer);
    while(strlen(buffer)>19)
    {
        printf("Reingrese sus nombres: ");
        fflush(stdin);
        gets(buffer);
    }
    strcpy(nombre,buffer);


    printf("Ingrese su apellido: ");
    fflush(stdin);
    gets(buffer2);

    while(strlen(buffer2)>19)
    {
        printf("Reingrese su apellido: ");
        fflush(stdin);
        gets(buffer2);
    }
    strcpy(apellido,buffer2);

    strcpy(apellidoNombre,apellido);

    strcat(apellidoNombre,", ");
    strcat(apellidoNombre,nombre);

    strlwr(apellidoNombre);

    len=strlen(apellidoNombre);
    apellidoNombre[0]=toupper(apellidoNombre[0]);

    for (i=0; i<len ;i++)
    {
        if(isspace(apellidoNombre[i]))
            {
                apellidoNombre[i+1]=toupper(apellidoNombre[i+1]);
            }
    }

    puts(apellidoNombre);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*nombre:german ezequiel
apellido:scarafilo
no se pueden tocar

apellidoNombre -> Scarafilo, German Ezequiel */



int main()
{
    char cadena[50];
    char otraPalabra[12];

    printf("Ingrese un texto: ");
    gets(cadena);

    puts(cadena);

   /*strcat(palabra,otraPalabra);

   puts(palabra);*/
    //strlwr()
    //strupr
    /*strlwr(palabra);
    puts(palabra);

    printf("La palabra es: %s", palabra);*/





    /*int comp;

    comp = strcmp(palabra, otraPalabra);

    printf("%d", comp);*/


    //otraPalabra = palabra;
    /*strcpy(otraPalabra,palabra);
    printf("\n%s", otraPalabra);*/


    /*int cantidad;
    cantidad = strlen("sol");

    printf("%d", cantidad);

    printf("\n%s", palabra);*/



    return 0;
}


/*
strlwr transforma a minúsculas
strupr transforma a mayúsculas
strlen cuenta los caracteres
strcpy copia de un a variable a otra
strcmp compara 2 variables (es key sensitive)
stricmp o strcmpi compara 2 variables (NO es key sensitive)
strcat concatenar palabras
// Decir cadena es igual a decir variable
puts(cadena); es igual a printf("%s",cadena); nada más que a puts sólo se le puede pasar una variable
para una cadena de textos, no conviene usar el scanf, sino gets
*/

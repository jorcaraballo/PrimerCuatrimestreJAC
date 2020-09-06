
#include <stdio.h>
#include <stdlib.h>
/*
1. Depuracion queda acotada
2. Reutilización
3. Independencia del codigo
*/

//prototipo - declaracion - firma
//tipo nombre (datos que recibe -> Parametros)

int SumarNumeros(int, int);
int RestarNumeros(int,int);
int MultiplicarNumeros(int,int);
float DividirNumeros(int,int);

int main()
{
    int unNumero;
    int otroNumero;
    int suma;
    int resta;
    int multiplicacion;
    float division;

    suma = SumarNumeros(7,8); //llamada // parametros actuales -> cambian en cada llamada
    printf("La suma de los dos numeros es: %d\n", suma);

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    suma = SumarNumeros(unNumero, otroNumero);
    printf("La suma de los dos numeros es: %d\n", suma);


    resta = RestarNumeros(7,8); //llamada // parametros actuales -> cambian en cada llamada
    printf("La resta de los dos numeros es: %d\n", resta);

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    resta = RestarNumeros(unNumero, otroNumero);
    printf("La resta de los dos numeros es: %d\n", resta);


    multiplicacion = MultiplicarNumeros(7,8); //llamada // parametros actuales -> cambian en cada llamada
    printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    multiplicacion = MultiplicarNumeros(unNumero, otroNumero);
    printf("La multiplicacion de los dos numeros es: %d\n", multiplicacion);


    division = DividirNumeros(7,8); //llamada // parametros actuales -> cambian en cada llamada
    printf("La division de los dos numeros es: %.2f\n", division);

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);

    division = DividirNumeros(unNumero, otroNumero);
    printf("La division de los dos numeros es: %.2f\n", division);

    return 0;
}
int SumarNumeros(int primerNumero, int segundoNumero) //parametros formales
{
    int suma;
    suma = primerNumero + segundoNumero;
    return suma;
}
int RestarNumeros(int primerNumero, int segundoNumero) //parametros formales
{
    int restar;
    restar = primerNumero - segundoNumero;
    return restar;
}
int MultiplicarNumeros(int primerNumero, int segundoNumero) //parametros formales
{
    int multiplicar;
    multiplicar = primerNumero * segundoNumero;
    return multiplicar;
}
float DividirNumeros(int primerNumero, int segundoNumero) //parametros formales
{
    float dividir;
    dividir = (float)primerNumero / segundoNumero;
    return dividir;
}

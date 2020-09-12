/*
Realizar una funcion que reciba el precio float y el porcentaje de un descuento como entero
retornar el precio con el descuento al main
*/

#include <stdio.h>
#include <stdlib.h>
float SsacarDescuento (float, int);

int main()
{
    float precio;
    int porcentajeDesc;
    float precioConDescuento;

    printf("Ingrese el precio del producto: ");
    scanf ("%f", &precio);

    printf("Ingrese el descuento del producto: ");
    scanf ("%d", &porcentajeDesc);

    precioConDescuento=sacarDescuento(precio,porcentajeDesc);
    printf("El precio con descuento es: %.2f", precioConDescuento);

    return 0;
}

float SacarDescuento (float precio, int porcentajeDesc)
{
    float resultadoFinal;
    resultadoFinal=precio-(precio*porcentajeDesc/100);

    return resultadoFinal;
}

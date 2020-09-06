//Funcion recursiva (recursividad)
int CalcularFactorial(int);

int main()
{
    int numero;
    int resultado;
    numero = 0;

    resultado = CalcularFactorial(numero);
    printf("El factorial de %d es: %d", numero, resultado);
    return 0;
}

int CalcularFactorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
         resultado = numero * CalcularFactorial(numero - 1);
    }

    return resultado;

}

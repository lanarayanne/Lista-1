/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de temperatura em graus Celsius: ");
    scanf ("%f", &a );
    double b= a+273.15;
    printf("A temperatura em Kelvin %.2f ", b );
    return 0;
}

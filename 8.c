/* Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A formula de conversão é C = K − 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de temperatura em graus Kelvin: ");
    scanf ("%f", &a );
    float b= a-273.15;
    printf("A temperatura em Celsius %.2f ", b );
    return 0;
}

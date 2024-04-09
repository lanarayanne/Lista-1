/* Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = C∗(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de temperatura em graus Celsius: ");
    scanf ("%f", &a );
    float b= ((9*a)/5)+32;
    printf("A temperatura em Fahrenheit %.2f ", b );
    return 0;
}

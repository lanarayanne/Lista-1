/* Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A fórmula de conversão é: C = 5.0 ∗ (F − 32.0)/9.0, sendo C a temperatura em Celsius e F a temperatura em Fahrenheit.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de temperatura em graus Fahrenheit: ");
    scanf ("%f", &a );
    float b= ((a-32)/9)*5;
    printf("A temperatura em Celsius %.2f ", b );
    return 0;
}

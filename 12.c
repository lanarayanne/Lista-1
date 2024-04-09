/*Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é K = 1, 61 ∗ M, sendo K a distância em quilômetros e  M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir distancia em milhas: ");
    scanf ("%f", &a );
    float b= a*1.61;
    printf("A distancia em quilometros eh igual a %.2f ", b );
    return 0;
}

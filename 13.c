/*Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de conversão é:  M =K/1,61 , sendo K a distância em quilômetros e M em milhas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir distancia em quilometros: ");
    scanf ("%f", &a );
    double b= a/1.61;
    printf("A distancia em milhas eh igual a %.2f ", b );
    return 0;
}

/*Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s (metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir velocidade em km/h: ");
    scanf ("%f", &a );
    float b= a/3.6;
    printf("A velocidade em m/s é igual a %.2f ", b );
    return 0;
}

/* Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h (quilômetros por hora). A fórmula de conversão é: K = M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir velocidade em m/s: ");
    scanf ("%f", &a );
    float b= a*3.6;
    printf("A velocidade em km/h é igual a %.2f ", b );
    return 0;
}

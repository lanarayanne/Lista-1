/* A fórmula de conversão é: P = C/2,54 , sendo C o comprimento em centímetros e P o comprimento em polegadas.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir o comprimento em centimetros: ");
    scanf ("%f", &a );
    double b= a/2.54;
    printf("O comprimento em polegadas eh igual a %.2f ", b );
    return 0;
}

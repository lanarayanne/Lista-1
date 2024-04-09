/*Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3 . A fórmula de conversão é: M = L/1000 , sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir volume em litros: ");
    scanf ("%f", &a );
    double b= a/1000;
    printf("O volume em m3 eh igual a %.2f ", b );
    return 0;
}

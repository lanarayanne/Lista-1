/*Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A fórmula de conversão é: L = 1000 ∗ M, sendo L o volume em litros e M o volume em metros cúbicos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir volume em m3: ");
    scanf ("%f", &a );
    double b= a*1000;
    printf("O volume em litros eh igual a %.2f ", b );
    return 0;
}

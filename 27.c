/*Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A fórmula de conversão é: M = H ∗ 10000, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de área em hectares: ");
    scanf ("%f", &a );
    double b= a*10000;
    printf("A area em metros quadrados eh igual a %.2f ", b );
    return 0;
}

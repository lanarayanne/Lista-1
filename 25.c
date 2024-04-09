/*Leia um valor de área em acres e apresente-o convertido em metros quadrados m2 . A fórmula de conversão é: M = A ∗ 4048, 58, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de área em acres: ");
    scanf ("%f", &a );
    double b= a*4048.58;
    printf("A area em metros quadrados eh igual a %.2f ", b );
    return 0;
}

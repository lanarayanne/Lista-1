/*Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A fórmula de conversão é: H = M ∗ 0, 0001, sendo M a área em metros quadrados e H a área em hectares.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de área em metros quadrados: ");
    scanf ("%f", &a );
    double b= a*0.0001;
    printf("A area em hectares eh igual a %.2f ", b );
    return 0;
}

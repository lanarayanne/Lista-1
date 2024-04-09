/*Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A fórmula de conversão é: A = M ∗ 0, 000247, sendo M a área em metros quadrados e A a área em acres.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor de área em m2: ");
    scanf ("%f", &a );
    float b= a*0.000247;
    printf("o comprimento em acres eh igual a %.2f ", b );
    return 0;
}

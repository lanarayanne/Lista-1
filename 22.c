/*Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de conversão é: M = 0, 91 ∗ J, sendo J o comprimento em jardas e M o comprimento em metros.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor do comprimento em jardas: ");
    scanf ("%f", &a );
    float b= a*0.91;
    printf("o comprimento em metros eh igual a %.2f ", b );
    return 0;
}

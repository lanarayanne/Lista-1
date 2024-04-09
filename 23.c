/* Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de conversão é: J = M/0,91 , sendo J o comprimento em jardas e M o comprimento em metros*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor do comprimento em metros: ");
    scanf ("%f", &a );
    float b= a/0.91;
    printf("o comprimento em jardas eh igual a %.2f ", b );
    return 0;
}

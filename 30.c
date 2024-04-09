/* Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a= 4.98;
    printf ("A cotacao do dolar dia 11/03/2024 é %f \n", a);
    float b;
    printf("Inserir valor em reais: ");
    scanf("%f", &b); 
    float cot = b/a;
    printf("%f em dolars eh igual a %.2f ", b, cot);
    return 0;
}

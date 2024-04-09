/* Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("Inserir primeira variável: \n");
    scanf("%f", &a);
    printf("Inserir segunda variável: \n");
    scanf("%f", &b);
    printf("Inserir terceira variável: \n");
    scanf("%f", &c); 
    float somaquad = (a*a) + (b*b) + (c*c);
    printf("A soma dos quadrados dos valores inseridos eh igual a %.2f ", somaquad );
    return 0;
}

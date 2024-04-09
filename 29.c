/*Leia quatro notas, calcule a média aritmética e imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    printf("Inserir primeira nota: \n");
    scanf("%f", &a);
    printf("Inserir segunda nota: \n");
    scanf("%f", &b);
    printf("Inserir terceira nota: \n");
    scanf("%f", &c);
    printf("Inserir quarta nota: \n");
    scanf("%f", &d); 
    float mediaa = (a+b+c+d)/4;
    printf("A media aritmetica das notas inseridas eh igual a %.2f ", mediaa);
    return 0;
}

/*Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12% */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    printf ("Inserir valor do produto: ");
    scanf("%f", &a); 
    float desconto = 0.12*a;
    float valor = a-desconto;
    printf("O valor final do produto com desconto eh %.2f", valor);
    return 0;
}

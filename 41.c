/*Faça um programa que leia o valor da hora de trabalho (em reais) e o número de horas trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    printf ("Inserir valor da hora de trabalho (reais): ");
    scanf ("%f", &a);
    printf ("Inserir numero de horas trabalhadas no mes: ");
    scanf ("%f", &b);
    float bruto= a*b;
    float adicional= 0.1*bruto;
    float total = bruto+adicional;
    printf ("O valor a ser pago para o funcionario por %.2f horas trabalhadas e adicional de 10%% eh igual a %.2f \n", b, total);
    return 0;
}

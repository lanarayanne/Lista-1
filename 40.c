/*Uma empresa contrata um encanador a R$ 30,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para imposto de renda. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a=30;
    float b;
    printf ("Inserir quantidade de dias trabalhados: \n");
    scanf ("%f", &b);
    float bruto= a*b;
    float imposto= 0.08*bruto;
    float liquido = bruto-imposto;
    printf ("O salario recebido por %.2f dias trabalhados considerando 8%% de imposto eh igual a %.2f \n", b, liquido);
    return 0;
}

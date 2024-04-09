/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido proporcionalmente ao valor que cada um deu para a realização da aposta. Faça um programa que leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do prêmio com base no valor investido.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float amigo1, amigo2, amigo3, premio;
    printf ("Inserir valor que o primeiro amigo investiu: ");
    scanf ("%f", &amigo1);
    printf ("Inserir valor que o segundo amigo investiu: ");
    scanf ("%f", &amigo2);
    printf ("Inserir valor que o terceiro amigo investiu: ");
    scanf ("%f", &amigo3);
    printf ("Inserir valor do premio: ");
    scanf ("%f", &premio);
    float total = amigo1+amigo2+amigo3;
    float prop1 = (amigo1*100)/total;
    float prop2 = (amigo2*100)/total;
    float prop3 = (amigo3*100)/total;
    float prem1 = (prop1/100)*premio;
    float prem2 = (prop2/100)*premio;
    float prem3 = (prop3/100)*premio;
    printf("Com um premio de %.2f,\nquem investiu %.2f ira receber %.2f, \nquem investiu %.2f, ira receber %.2f, e \nquem investiu %.2f ira receber %.2f.", premio, amigo1, prem1, amigo2, prem2, amigo3,prem3);
    return 0;
}

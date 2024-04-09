/*Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere outro número formado pelos dígitos invertidos do número lido. Exemplo:*/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf ("Inserir numero inteiro positivo de 3 digitos ");
    scanf ("%d", &numero);
    int prim = numero/100;
    int resto1 = numero % 100; //% retorna o resto da divisao. Ex: 154 / 100. O % e 54
    int seg = resto1/10;
    int resto2 = resto1 % 10;
    int ter = resto2/1;
    int resto3 = resto2 % 1;
    int inverso = (ter*100)+(seg*10)+(prim*1);
    printf("O inverso do numero %d e %d", numero, inverso );
    return 0;
}

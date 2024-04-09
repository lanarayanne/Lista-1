/*  Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf ("Inserir numero inteiro positivo de 4 digitos ");
    scanf ("%d", &numero);
    int prim = numero/1000;
    int resto1 = numero % 1000;
    int seg = resto1/100;
    int resto2 = resto1 % 100;
    int ter = resto2/10;
    int resto3 = resto2 % 10;
    int qua = resto3/1;
    int resto4 = resto3 % 1;
    printf("O numero %d com cada digito em uma linha fica  \n%d\n%d\n%d\n%d", numero, prim, seg, ter, qua );
    return 0;
}

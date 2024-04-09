/*Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("A soma do sucessor do seu triplo com o antecessor de seu dobro \n");
    printf("Inserir numero inteiro: ");
    scanf("%d", &a); 
    int suc3 = (a*3)+1;
    int ant2 = (a*2)-1;
    int soma = suc3+ant2;
    printf("O resultado eh igual a %d", soma);
    return 0;
}

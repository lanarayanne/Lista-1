/*Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Inserir numero inteiro: ");
    scanf("%d", &a); 
    int ant = a-1;
    int suc = a+1;
    printf("O antecessor de %d eh %d \nO sucessor de %d eh %d", a, ant, a, suc);
    return 0;
}

/* Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela ASCII para resolver o problema.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*declarar variavel*/
    char mai;
    /*entrada de dados*/
    printf ("Digite uma letra maiuscula: ");
    scanf("%c", &mai);
    char min = mai+32;
    /*saida de dados*/
    printf("A letra %c minuscula eh igual a %c \n" , mai, min);
    return 0;
}

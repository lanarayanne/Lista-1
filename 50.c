/*Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, anoatual = 2024;
    printf ("Estamos em %d\n", anoatual);
    printf ("Digite sua idade: ");
    scanf ("%d", &idade);
    int nasc1 = anoatual-(idade+1);
    int nasc2 = anoatual - (idade);
    printf("Se voce ainda nao fez aniversario esse ano, voce nasceu em %d. \nMas se voce ja fez aniversaio esse ano, voce nasceu em %d", nasc1, nasc2);
    
    return 0;
}

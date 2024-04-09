/*Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor;
    printf ("Inserir tempo em segundos ");
    scanf ("%d", &valor);
    int horas = valor/3600;
    int resto1 = valor % 3600;
    int minutos = resto1/60;
    int resto2 = resto1 % 60;
    int segundos = resto2/1;
    int resto3 = resto2 % 1;
    printf(" %d segundos sao %d horas %d minutos e %d segundos", valor, horas, minutos, segundos );
    return 0;
}

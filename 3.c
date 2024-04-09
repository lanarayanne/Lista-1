/* Peça para o usuário digitar três valores inteiros e imprima a soma deles. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf ("Inserir primeiro valor: \n");
    scanf ("%d", &a);
    printf ("Inserir segundo valor: \n");
    scanf ("%d", &b);
    printf ("Inserir terceiro valor: \n");
    scanf ("%d", &c);
    int d=a+b+c;
    printf("a soma de todos os valores inseridos e igual a: %d ",d);
    return 0;
}

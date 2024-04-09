/* Leia um número real e imprima o resultado do quadrado desse número. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf ("Inserir numero inteiro: ");
    scanf ("%d", &a );
    int b= a*a;
    printf("O quadrado do número inteiro inserido e : %d ",b);
    return 0;
}

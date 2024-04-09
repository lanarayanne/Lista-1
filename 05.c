/* Leia um número real e imprima a quinta parte deste número.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir numero real: ");
    scanf ("%f", &a );
    float b= a/5;
    printf("A quinta parte do numero inserido eh %f ", b );
    return 0;
}

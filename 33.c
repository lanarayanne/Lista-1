/*Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Considere que a figura a seguir eh um quadrado \n");
    printf("\t ______ \n\t|      |\n\t|      |\n\t ______ \n");
    printf("\n");
    printf("Inserir valor de seu lado: ");
    scanf("%d", &a); 
    int area = a*a;
    printf("A area do quadrado eh igual a %d", area);
    return 0;
}

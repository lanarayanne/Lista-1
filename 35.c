/* Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação: hipotenusa = √ a2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da hipotenusa através da equação. Imprima o resultado desta operação. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    printf ("Considere o triangulo de catetos a e b \n");
    printf("Inserir valor do cateto a: ");
    scanf("%f", &a); 
    printf("Inserir valor do cateto b: ");
    scanf("%f", &b);
    float soma = (a*a)+(b*b);
    float raiz = sqrt(soma); //sqrt serve para calcular raiz quadrada na biblioteca math.h
    printf("A hipotenusa do triangulo eh igual a %.2f", raiz);
    return 0;
}

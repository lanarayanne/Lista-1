/*Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    printf ("Inserir valor do salario: ");
    scanf("%f", &a); 
    float aumento = 0.25*a;
    float valor = a+aumento;
    printf("O valor final do salario eh %.2f", valor);
    return 0;
}

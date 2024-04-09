/*Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7% de imposto sobre o salário-base. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor do salario: ");
    scanf ("%f", &a);
    float adc1= a*0.05;
    float imp1= a*0.07;
    float sal= a+adc1-imp1;
    printf ("O valor do salario a receber eh igual a %.2f", sal);
    return 0;
}
/*Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é: G = R ∗ 180/π, sendo G o ângulo em graus e R em radianos e π =3.14.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double pi=M_PI;
    printf ("pi eh igual a %f \n", pi);
    float a;
    printf ("Inserir valor do angulo em radianos: ");
    scanf ("%f", &a );
    double b= a*(180/pi);
    printf("O valor do angulo em graus eh igual a %.2f ", b );
    return 0;
}

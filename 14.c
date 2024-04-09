/*Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é  R = G ∗ π/180, sendo G o ângulo em graus e R em radianos e π =3.14.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double pi=M_PI;
    printf ("pi eh igual a %f \n", pi);
    float a;
    printf ("Inserir valor do angulo em graus: ");
    scanf ("%f", &a );
    double b= a*(pi/180);
    printf("O valor do angulo em radianos eh igual a %.2f ", b );
    return 0;
}

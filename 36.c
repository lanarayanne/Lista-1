/*Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = π ∗ raio2 ∗ altura, onde π = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    double pi=M_PI;
    printf ("Considere um cilindro circular e pi = %f \n", pi);
    printf("Inserir valor da altura: ");
    scanf("%f", &a); 
    printf("Inserir valor do raio: ");
    scanf("%f", &b);
    float volume = pi*(b*b)*a;
    printf("O volume do cilindro circular eh igual a %.2f", volume);
    return 0;
}

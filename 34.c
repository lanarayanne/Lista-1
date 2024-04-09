/*Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A área do círculo e´ π ∗ raio2 , considere π = 3.141592.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    float pi = M_PI;
    printf ("pi eh igual a %f \n" , pi);
    printf("Inserir valor do raio do círculo: ");
    scanf("%f", &a); 
    float area = (a*a)*pi;
    printf("A area do circulo eh igual a %.2f", area);
    return 0;
}

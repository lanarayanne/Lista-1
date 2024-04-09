/*Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar ́ subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b;
    printf ("Inserir altura do degrau: ");
    scanf ("%f", &a);
    printf ("Inserir altura do desejada: ");
    scanf ("%f", &b);
    float quantdeg= b/a;
    printf ("Para atingir a altura desejada de %.2f, e necessario subir %.2f degraus", b, quantdeg);
    return 0;
}

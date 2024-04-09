/*Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0, 0).*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y;
    printf ("Considere o ponto P (x,y)\n");
    printf ("Inserir coordenada x: ");
    scanf ("%d", &x);
    printf ("Inserir coordenada y: ");
    scanf ("%d", &y);
    float dist1= (0-x)*(0-x);
    float dist2 = (0-y)*(0-y);
    float dist3 = (dist1 + dist2);
    float dist = sqrt(dist3); //sqrt faz parte da biblioteca math.h para tirar raiz quadrada.
    printf("A distancia entre (%d,%d) e a origem (0,0) e %.2f", x, y, dist);
    
    return 0;
}

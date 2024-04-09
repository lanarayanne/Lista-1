/*Leia um valor de massa em libras e apresente-o convertido em quilogramas. A fórmula de conversão é: K = L∗ 0, 45, sendo K a massa em quilogramas e L a massa em libras.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor da massa em libras: ");
    scanf ("%f", &a );
    float b= a*0.45;
    printf("A massa em quilogramas eh igual a %.2f ", b );
    return 0;
}

/* Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de conversão é: L = K/0,45 , sendo K a massa em quilogramas e L a massa em libras. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf ("Inserir valor da massa em quilogramas: ");
    scanf ("%f", &a );
    float b= a/0.45;
    printf("A massa em libras eh igual a %.2f ", b );
    return 0;
}

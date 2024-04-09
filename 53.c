/* Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float comp, larg, tela;
    printf ("Inserir valor do comprimento do terreno: ");
    scanf ("%f", &comp);
    printf ("Inserir valor da largura do terreno: ");
    scanf ("%f", &larg);
    printf ("Inserir valor do metro da tela: ");
    scanf ("%f", &tela);
    float perimetro = (2*comp)+(2*larg);
    float valor = perimetro*tela;
    printf("Um terreno com %.2f de comprimeto e %.2f de largura custara %.2f para ser cercado com tela", comp, larg, valor);
    return 0;
}

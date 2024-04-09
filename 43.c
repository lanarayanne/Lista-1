/*Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre: 
O total a pagar com desconto de 10%; 
O valor de cada parcela, no parcelamento de 3× sem juros;
A comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto) 
A comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total) */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a;
    printf ("Inserir valor: ");
    scanf ("%f", &a);
    float d10= a*0.1; /*desconto*/
    float td10= a-d10; /*valor com o desconto*/
    float p3 = a/3;
    float comavista = 0.05*td10;
    float comparc = 0.05*a;
    printf ("O total a vista eh igual a %.2f \n", td10);
    printf ("O de cada parcela em 3x eh igual a %.2f \n", p3);
    printf ("A comissao pelo pagamento a vista eh igual a %.2f \n", comavista);
    printf ("A comissao pelo pagamento parcelado eh igual a %.2f \n", comparc);
    return 0;
}

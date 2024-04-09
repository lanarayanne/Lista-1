/*A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:

O primeiro ganhador receberá 46%;
O segundo receberá 32%;
O terceiro receberá o restante
Calcule e imprima a quantia ganha por cada um dos ganhadores*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a=780000.00;
    float prim= 0.46*a;
    float seg= 0.32*a;
    float ter= a-(prim+seg);
    float tot = prim+seg+ter;
    printf ("O primeiro ganhador recebera %.2f \n", prim);
    printf ("O segundo ganhador recebera %.2f \n", seg);
    printf ("O terceiro ganhador recebera %.2f \n", ter);
    printf ("O total eh %.2f \n", tot);
    return 0;
}

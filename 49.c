/*Faça um programa para ler o horário (hora, minuto e segundo) de início e a duração, em segundos, de uma experiência biológica. O programa deve resultar com o novo horário ́ (hora, minuto e segundo) do término da mesma. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos, segundos, duracao;
    printf ("Digitar horário conforme solicitado. \nEx: 1h 40 min 15s, Digitar 1, 40 e 15 respectivamente\n");
    printf ("Inserir valor das horas: ");
    scanf ("%d", &horas);
    printf ("Inserir valor dos minutos: ");
    scanf ("%d", &minutos);
    printf ("Inserir valor dos segundos: ");
    scanf ("%d", &segundos);
    printf ("Inserir tempo de duracao em segundos: ");
    scanf ("%d", &duracao);
    int hremseg = (horas*3600)+(minutos*60)+segundos;
    int tempototal = hremseg + duracao;
    int hrfim = tempototal/3600;
    int resto1 = tempototal % 3600;
    int minfim = resto1/60;
    int resto2 = resto1 % 60;
    int segfim = resto2;
    printf("O experimento que começar as %d horas, %d minutos e %d segundos \ne durar %d segundos, terminara as %d horas, %d minutos e %d segundos", horas, minutos, segundos, duracao, hrfim, minfim, segfim);
    return 0;
}

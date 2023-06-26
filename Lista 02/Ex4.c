#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última alteração -- 03/04/2023
Objetivo - Calcular E = 1 + 1/1! + 1/2! ... 1/N!
*/

//Fatorial
float fatorial (int num)
{
    //Declaração de variáveis
    float fat=1;
    //Cálculo fatorial
    for(int controle=1;controle<=num;controle++)
    {
        fat*=controle;
    }
    return fat;
}
//Main
int main (void)
{
    //Declaração de variável
    float E = 0, N;
    //Leitura de N
    scanf("%f", &N);
    //Cálculo do E
    for(int control=0;control<=N;control++)
    {
        E += 1/fatorial(control);
    }
    //Exibição
    printf("%.2f", E);
}
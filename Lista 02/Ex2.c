#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última alteração -- 03/04/2023
Objetivo - Ler uma sequencia de números e calcular e exibir, em porcentagem, quantos são positivos, negativos e zeros.
*/
int main (void)
{
    //Declaração de variáveis
    float qnt, control, num, zeros = 0, neg = 0, pos = 0;
    //printf("Insira a quantidade de números:");
    //Leitura da quantidade de números
    scanf("%f", &qnt);
    //Repetição de leitura e análise dos números
    for(control = 1; control <= qnt; control++)
    {
        //Zeros
        scanf("%f",&num);
        if(num == 0)
        {
            zeros++;
        }
        //Positivos
        else if(num > 0)
        {
            pos++;
        }
        //Negativos
        else if(num < 0)
        {
            neg++;
        }
    }
    //Exibição
    printf("%.0f%% POSITIVOS\n", (pos/qnt)*100);
    printf("%.0f%% NEGATIVOS\n", (neg/qnt)*100);
    printf("%.0f%% ZEROS\n", (zeros/qnt)*100);
    return 0;
}
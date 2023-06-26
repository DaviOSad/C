#include <stdio.h>
#include <stdbool.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 13/04/2023
Objetivo - Receber um número inteiro e determinar se ele é positivo ou não
*/
//Determinação do sinal do número
bool positivo (float num)
{
    if (num>0) return true;
    else return false;
}
//Main
int main (void)
{
    //Variáveis
    float num, N;
    //Leitura da quantidade de números
    scanf("%f", &N);
    //Repetição para leitura e exibição da resposta
    for (int controle = 1; controle <=N; controle ++)
    {
        scanf("%f", &num);
        //Chamada da função e avaliação da condição
        //Se positivo
        if(positivo(num))
        {
            printf("SIM\n");
        }
        //Se 0 ou negativo
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}

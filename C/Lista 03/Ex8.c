#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 13/04/2023
Objetivo - Receber um número N e calcular S de acordom com uma expressão.
*/

//Cálculo de S
float calculaS (float N)
{
    //Variáveis
    float controle = 1, dem = 4, S = 0, num = 2, somanum = 3;
    //Cálculo de S
    while (controle<=N)
    {
        S += num/dem;
        dem ++;
        num += somanum;
        somanum += 2;
        controle ++;
    }
    return S;
}
//Main
int main (void)
{
    //Variáveis
    float N;
    //Leitura de N
    scanf("%f", &N);
    //Chamada da função e exibição do resultado 
    printf("%f", calculaS(N));
}
#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 13/04/2023
Objetivo - Receber um número de alunos e suas notas e calcular a média das notas dos alunos aprovados (>=6)
*/

//Cálculo da média
float mediaaprovados (int N)
{
    //Variáveis
    float nota, media = 0, mediadem = 0, controle = 0;
    //Leitura e avaliação da condição (aprovado ou não)
    for (controle = 1; controle <=N; controle++)
    {
    //Leitura da nota
    scanf("%f", &nota);
    //Aprovado
    if (nota>=6)
    {
        media += nota;
        mediadem++;
    }
    }
    //Cálculo da média
    media = media/mediadem;
    return media;

}
//Main
int main (void)
{
    //Variáveis
    int N;
    //Leitura da quantidade de alunos
    scanf("%d", &N);
    //Exibição da média
    printf("%.1f", mediaaprovados(N));
    
}
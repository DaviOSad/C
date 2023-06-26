#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 08/04/2023
Objetivo - Receber 3 notas de uma quantidade N de alunos (digitada), calcular e exibir a média aritimética ou a média ponderada (A ou P), para cada aluno.
*/
// Procedimento de cálculo e exibição dos dois tipos de média
void media (float n1, float n2, float n3, char opcao)
{
    float media;
    //Média Aritimética
    if (opcao == 'A' || opcao == 'a')
    {
        media = (n1 + n2 + n3)/3;
        printf("%.2f\n", media);
    }
    //Média Ponderada
    else if (opcao == 'P' || opcao == 'p')
    {
        media = (n1 * 5 + n2 * 3 + n3 * 2)/10;
        printf("%.2f\n", media);
    }
}
//Main
int main (void)
{
    //Variáveis
    float n1, n2, n3, N;
    char opcao;
    //Número de alunos
    //printf("Insira a quantidade de alunos:");
    scanf("%f", &N);
    //Leitura das notas e da opção de média
    for (int controle = 1; controle <= N; controle ++)
    {
        //printf("Insira as notas do aluno e o que deseja calcular ('A' para media e 'P' para media ponderada):");
        scanf("%f %f %f", &n1, &n2 , &n3);
        scanf(" %c", &opcao);
        //Acionamento do procedimento
        media (n1, n2, n3, opcao);
    }
return 0;

}
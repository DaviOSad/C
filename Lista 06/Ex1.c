#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 17/05/2023
Objetivo - Preencher um vetor com as notas de 10 alunos, calcular a média e exibi-la junto ao número de alunos acima da média.
*/
//Preencher o vetor
void preencher (float notas[10])
{
    //Percorrendo o vetor
    for(int aluno = 0; aluno<10; aluno++)
    {
        //Preenchimento
        printf("Insira a nota do aluno %d\n", aluno);
        scanf("%f", &notas[aluno]);
    }
}
//Media e número de alunos acima da média
void mediaEconta (float notas[10])
{
    //Declaração de variáveis
    float media = 0, mediadem = 0, acima = 0;
    //Cálculo da média
    for (int aluno = 0; aluno < 10; aluno++)
    {
        media += notas[aluno];
        mediadem ++;
    }
    media = media/mediadem;
    //Quantos estão acima da média
    for (int aluno = 0; aluno < 10; aluno++)
    {
        if (notas[aluno] > media) acima++;

    }
    //Exibição
    printf("Media: %.2f\nAlunos acima da media: %.0f", media, acima);

}
//Main
int main (void)
{
    float turma[10];
    preencher(turma);
    mediaEconta(turma);
    return 0;
}

 
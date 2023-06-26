#include <stdio.h>
#include <stdlib.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 28/05/2023
Objetivo - Preencher um vetor de N posições e exibi-las usando ponteiros
*/
int main (void)
{
    int N;
    //Leitura do numero de posições do vetor
    printf("Insira o número de elementos a serem armazenados no vetor: ");
    scanf("%d", &N);
    int* vetor = (int*)malloc(N*sizeof(int)); // Declaração do vetor
    printf("Insira 5 números de elementos no vetor: \n");
    //Preenchimento do vetor
    for (int i = 0; i < N; i++)
    {
        printf("elemento - %d: ", i);
        scanf("%d",(vetor + i));
    }
    printf("Os elementos que você inseriu são: ");
    //Exibição do vetor
    for (int i = 0; i < N; i++)
    {
        printf("elemento - %d: %d\n", i, *(vetor+i));

    }
    //Free vetor
    free(vetor);
    return 0;
}
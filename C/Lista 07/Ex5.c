#include <stdio.h>
#include <stdlib.h>

void troca (int* a, int* b)
{
    int x = *a;
    *a = *b;
    *b = x;
}

void ordem(int* vetor, int tamanho)
{
    if(tamanho<=1) return;
    int maior = 0, N = tamanho;
    for(int i = 0; i < tamanho; i++)
    {
        if(*(vetor+i)>*(vetor+maior)) maior = i; 
    }
    if(maior != tamanho - 1) troca((vetor+tamanho-1), (vetor+maior));
    ordem(vetor,tamanho-1);

}
int main (void)
{
    int N;
    printf("Insira o número de elementos a serem armazenados no vetor: ");
    scanf("%d", &N);
    int* vetor = (int*)malloc(N*sizeof(int));
    printf("Insira %d números de elementos no vetor: \n", N);
    for (int i = 0; i<N; i++)
    {
        printf("elemento - %d: ", i+1);
        scanf("%d", (vetor+i));
    }
    ordem(vetor, N);
    printf("Os elementos do vetor após a ordenação: ");
    for(int i = 0; i < N; i++)
    {
        printf("elemento - %d: %d\n", i+1, *(vetor+i));
    }
    free(vetor);
    return 0;   
}
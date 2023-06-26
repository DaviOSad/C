#include <stdio.h>
#include <stdlib.h>

void soma (int* vetor, int N)
{
    int resp = 0;
    for (int i = 0; i < N; i++)
    {
        resp+=*(vetor+i);
    }
    printf("A soma do vetor é: %d", resp);
}

int main (void)
{
    int N;
    printf("Insira o número de elementos a serem armazenados no vetor(máx.10): ");
    scanf("%d", &N);
    int* vetor = (int*)malloc(N*sizeof(int));
    printf("Insira 5 números de elementos no vetor: ");
    for(int i = 0; i < N; i++)
    {
        printf("elemento - %d: ", i+1);
        scanf("%d", (vetor+i));

    }
    soma(vetor, N);
    free(vetor);
    return 0;
}
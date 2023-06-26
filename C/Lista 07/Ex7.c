#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int N;
    printf("Insira o número de elementos a serem armazenados no vetor (máx.15): ");
    scanf("%d", &N);
    int* vetor = (int*)malloc(N*sizeof(int));
    for (int i = 0; i<N; i++)
    {
        printf("elemento - %d: ", i+1);
        scanf("%d", (vetor+i));
    }
    printf("Os elementos do vetor na ordem inversa são:\n");
    for (int i = N - 1; i>=0; i--)
    {
        printf("elemento %d: %d\n", i+1, *(vetor+i));
    }

    free(vetor);
    return 0;
}
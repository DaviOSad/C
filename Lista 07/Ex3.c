#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int N, maior;
    printf("Insira o número total de elementos (1 a 100): ");
    scanf("%d", &N);
    int* vetor = (int*)malloc(N*sizeof(int));
    for (int i = 0; i<N; i++)
    {
        printf("Número %d: ",i+1);
        scanf("%d", (vetor+i));
    }
    maior = *vetor;
    for (int i = 0; i<N;i++)
    {
        if (*(vetor+i)>maior) maior = *(vetor+i);
    }
    printf("O maior elemento é %d", maior);
    free(vetor);
    return 0;

}
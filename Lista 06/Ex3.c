#include <stdio.h>
#include <stdlib.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 17/05/2023
Objetivo - preencher 2 vetor e preencher um terceiro vetor com os valores dos dois primeiros intercalados, de tal forma que as posições ímpares tenham os valores do primeiro
vetor, e as pares, do segundo.
*/
//Preenchimento dos vetores
void preencher(float vetorX[10], float vetorY[10])
{   
    //Preenchimento do primeiro
    for (int i = 0; i < 10; i ++)
    {
        printf("Digite o %d valor para vetor X:\n", i);
        scanf("%f", &vetorX[i]);
    }
    //Preenchimento do segundo
    for (int i = 0; i < 10; i ++)
    {
        printf("Digite o %d valor para vetor Y:\n", i);
        scanf("%f", &vetorY[i]);
    }
}
//Escrita do terceiro vetor
float* intercalado (float vetorX[10], float vetorY[10])
{
    //Criação do terceiro vetor
    float* vetortotal = (float*)malloc(20*sizeof(float));
    //Escrita
    for (int i = 0; i < 10; i ++)
    {
        vetortotal[i * 2] = vetorY[i];
        vetortotal[(i* 2)+1] = vetorX[i];
    }
    //Retorna o novo vetor
    return vetortotal;
}
//Exibição
void exibicao (float vetortotal[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f ", *(vetortotal + i)); // vetortotal [i]
    }
}

int main (void)
{
    //Declaração dos vetores
    float vetorX[10], vetorY[10];
    //Preenchimento
    preencher(vetorX, vetorY);
    //Vetor Total
    float* vetortotal = intercalado(vetorX, vetorY);
    //Exibição
    exibicao(vetortotal);
    free(vetortotal);
    return 0;
    
}

// *(vetortotal + i)
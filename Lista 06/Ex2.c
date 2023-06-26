#include <stdio.h>
#include <stdlib.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 17/05/2023
Objetivo - Preencher um vetor com 10 valores, salvar os negativos em outro vetor e exibí-los
*/

//Preencher o vetor
void preencher (float x[10])
{
    for(int posicao = 0; posicao<10; posicao++)
    {
        scanf("%f", &x[posicao]);
    }
}

//Negativos
float* negativos (float x[10], int* novotamanho)
{
    int negativos = 0, salva = 0;
    //Conta o número de negativos
    for(int posicao = 0; posicao<10; posicao++)
    {
        if (x[posicao] < 0) negativos ++;
    }
    //Novo Vetor
    float* y = (float*)malloc(negativos * sizeof(float));
    //Tamanho do novo vetor
    *novotamanho = negativos; 
    //Copia os negativos para o novo vetor
    for(int posicao = 0; posicao<10; posicao++)
    {
        if (x[posicao] < 0)
        {
            y[salva] = x[posicao];
            salva++;
        }
    }
    return y; //Retorna o novo vetor

}

void exibicao (float *y, int tamanho)
{
    for (int posicao = 0; posicao < tamanho; posicao ++)
    {
        printf ("%.2f\n", y[posicao]);
    }
}

int main (void)
{
    float x[10];
    float* y = NULL;
    int novotamanho;
    preencher(x);
    y = negativos(x, &novotamanho);
    exibicao(y, novotamanho);
    free(y);
    return 0;

}
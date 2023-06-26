#include <stdio.h>
#include <stdlib.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 23/05/2023
Objetivo - Preencher uma matriz 4x4, calcular e exibir a soma dos valores abaixo da diagonal principal e exibir a propria diagonal principal.
*/
//Soma dos valores abaixo da diagonal principal
int somaEmbaixodiagonalP (int matriz[4][4])
{
    int soma = 0;
    //Percorre apenas os valores abaixo da diagonal
    for(int i = 1; i < 4; i++)
    {
        for (int j = 0; j < i; j++)
        {
            soma += matriz[i][j]; // Soma
        }
    }
    //Retorna a soma
    return soma;
}
//Main
int main (void)
{
    int matriz[4][4];
    //Preenche a matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posição %dx%d\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    //Chamada e exibição da soma
    printf("Soma dos valores abaixo da diagonal principal: %d\n", somaEmbaixodiagonalP(matriz));
    //Exibição da diagonal principal
     for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j) printf("%d", matriz[i][j]);
        }
    }
}
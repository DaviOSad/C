#include <stdio.h>
#include <stdlib.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 22/05/2023
Objetivo - Preencher uma matriz 5x5 e calcular: soma da linha 4, soma da coluna 2, soma da diagonal principal, soma da diagonal secundaria e a soma da matriz como um todo
*/

//Soma linha 4
int somaL4 (int matriz[5][5])
{
    int soma = 0;
    //Percorre a matriz
    for(int i = 0; i < 5; i++)
    {
        soma += matriz[4][i]; //Soma os valores da linha 4
    }
    //Retorna a soma
    return soma;
}
//Soma da coluna 2
int somaC2 (int matriz[5][5])
{
    int soma = 0;
    //Percorre a matriz
    for(int i = 0; i < 5; i++)
    {
        soma += matriz[i][2]; //Soma os valores da coluna 2
    }
    //Retorna a soma
    return soma;
}
//Soma da diagonal principal
int somaDiagonalP (int matriz [5][5])
{
    int soma = 0;
    //Percorre a matriz
    for (int linha = 0; linha < 5; linha ++)
    {
        for (int coluna = 0; coluna < 5; coluna ++)
        {
            if (linha == coluna) soma += matriz[linha][coluna]; //Soma os valores da diagonal principal
        }
    }
    //Retorna a soma
    return soma;
}
//Soma da diagonal secundária
int somaDiagonalS (int matriz [5][5])
{
    int soma = 0;
    //Percorre a matriz
    for(int i = 0; i < 5; i++)
    {
        soma += matriz[i][4-i]; //Soma os valores da diagonal secundaria

    }
    //Retorna a soma
    return soma;
}
//Soma da matriz como um todo
int somaMatriz (int matriz[5][5])
{
    int soma = 0;
    //Percorre a matriz
    for(int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna ++) soma += matriz[linha][coluna]; //Soma os valores da matriz
    }
    return soma;
}
//Main
int main (void)
{
    int matriz[5][5];
    //Preenche a matriz
    for(int linha = 0; linha < 5; linha++)
    {
        for (int coluna = 0; coluna < 5; coluna ++)
        {
            printf("Insira o valor da posicao %dx%d: \n", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    //Chamada e exibição das funções
    printf("Soma da linha 4: %d\n", somaL4(matriz)); //Soma linha 4
    printf("Soma da coluna 2: %d\n", somaC2(matriz)); //Soma coluna 2
    printf("Soma da diagonal principal: %d\n", somaDiagonalP(matriz)); //Soma diagonal principal
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalS(matriz)); //Soma diagonal secundária
    printf("Soma da matriz: %d", somaMatriz(matriz)); //Soma matriz
    return 0;

}

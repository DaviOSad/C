#include <stdio.h>
#include <stdlib.h>
void somaMatrizes (int matrizA[4][6], int matrizB [4][6], int matrizsoma[4][6])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrizsoma[i][j] = matrizA[i][j] + matrizB [i][j];
        }
    }
}

void diferencaMatrizes (int matrizA[4][6], int matrizB [4][6], int matrizdiferenca[4][6])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            matrizdiferenca[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

int main (void)
{
    int matrizA [4][6];
    int matrizB[4][6];
    int matrizdiferenca[4][6];
    int matrizsoma[4][6];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Insira o valor da posição %dx%d da Matriz A\n",i,j);
            scanf("%d", &matrizA[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Insira o valor da posição %dx%d da Matriz B\n",i,j);
            scanf("%d", &matrizB[i][j]);
        }
    }
    somaMatrizes(matrizA,matrizB, matrizsoma);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Valor da posição %dx%d da Matriz Soma: %d\n",i,j,matrizsoma[i][j]);
        }
    }
    diferencaMatrizes(matrizA, matrizB, matrizdiferenca);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf("Valor da posição %dx%d da Matriz Diferença: %d\n",i,j,matrizdiferenca[i][j]);
        }
    }

}


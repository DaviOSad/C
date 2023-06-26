#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 08/04/2023
Objetivo - Ler o número de filhos e o salario de um número indeterminado de pessoas, calcular e exibir a média do salários da população.
*/
//Procedimento para leitura dos valores e cálculo da média de salário da população
void mediasal ()
{
    //Declaração de variáveis
    float sal = 0, fil, media = 0, mediadem= 0;
    //Leitura dos valores
    while(sal>=0)
    {
        scanf("%f %f", &sal, &fil);
        if(sal>=0)
        {
        media += sal;
        mediadem++;
        }
    }
    //Cálculo da média
    media = media/mediadem;
    //Exibição
    printf("%.2f", media);
}
//Main
int main (void)
{
    //Chamada do procedimento
    mediasal();
}


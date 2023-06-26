#include <stdio.h>
#include <float.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 08/05/2023
Objetivo - Ler de um arquivo valores float, determinar e exibir o maior, o menor e a média deles
*/

int main (void)
{
    //Abertura do arquivo
    FILE *arqEntrada = fopen("entrada2.txt", "r");
    //Declaração de variáveis
    float valor, maior = FLT_MIN, menor = FLT_MAX, media = 0, mediadem = 0;
    //Leitura dos números
    while(fscanf(arqEntrada, "%f", &valor) != EOF)
    {
        //Maior
        if (valor >= maior) maior = valor;
        else {}
        //Menor
        if (valor <= menor) menor = valor;
        else {}
        //Media
        media += valor;
        mediadem ++;
    }
    media = media/mediadem;
    //Exibição
    printf("%.2f\n", maior);
    printf("%.2f\n", menor);
    printf("%.2f", media);
    //Fechamento do arquivo
    fclose(arqEntrada);
    return 0;
}
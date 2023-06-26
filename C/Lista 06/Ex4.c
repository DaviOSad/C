#include <stdio.h>
#include <stdlib.h>
#include <float.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 22/05/2023
Objetivo - Receber a 31 temperaturas do mês de janeiro e exibir a maior, a menor, a temperatura media e quantas temperaturas estavam abaixo da media.
*/

//Função para definir maior temperatura
float maiorTemp (float temp[31])
{
    float maior = 0;
    //Percorrendo o vetor
    for (int i = 0; i<31; i ++)
    {
        if (temp[i] > maior) maior = temp [i]; //Salvando a maior temperatura
    }
    //Retorna a maior 
    return maior;
}
//Função para definir menor temperatura
float menorTemp (float temp [31])
{
    float menor = FLT_MAX;
    //Percorrendo o vetor
    for (int i = 0; i<31; i ++)
    {
        if (temp[i] < menor) menor = temp[i];//Salvando a menor temperatura
    }
    //Retorna a menor temperatura
    return menor;
}
//Cálculo da temperatura média
float tempMedia (float temp [31])
{
    float media = 0, mediadem = 0;
    //Percorre o vetor
    for (int i = 0; i<31; i ++)
    {
        media += temp[i]; //Numerador da média
        mediadem ++; //Denominador da média
    }
    //Média
    media/=mediadem;
    //Retorna a média
    return media;
}
//Definição das temperaturas menores que a média
int menorMedia (float temp[31], float media)
{
    int quant = 0;
    //Percorre o vetor
    for (int i = 0; i<31; i ++)
    {
        if(temp[i] < media) quant ++; //Quantas são menores 
    }
    //Retorna o número de temperaturas menores que a média
    return quant;
}
//Main
int main (void)
{
    float temperatura[31], media;
    //Preenchimento do vetor
    for (int i = 0; i<31; i ++)
    {
        printf("Insira a temperatura do dia %d: ", (i+1));
        scanf("%f", &temperatura[i]);
    }
    //Chamadas das funções e Exibições
    media = tempMedia(temperatura);
    printf("A maior temperatura foi de: %.2f\n", maiorTemp(temperatura)); // Maior temperatura
    printf("A menor temperatura foi de: %.2f\n", menorTemp(temperatura)); // Menor temperatura
    printf("A media das temperaturas foi de: %.2f\n", media); // Média
    printf("Houve %d temperaturas abaixo da media.", menorMedia(temperatura, media)); // Quantas menores que a média
    return 0;
}

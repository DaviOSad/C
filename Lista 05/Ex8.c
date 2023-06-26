#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 07/05/2023
Objetivo - Receber o número de veículos e do aluguel de uma locadora e calcular e exibir o faturamento anual, o faturamento com multas e o custo com manutenção da empresa, 
além de escrever os resultados em um arquivo
*/
//Cálculo do Faturamento Anual
float faturamentoAnual (int veiculos, float aluguel)
{
    float faturamento = 0;
    return faturamento = (veiculos/3) * aluguel * 12;
}
//Cálculo do faturamento com as multas
float multas (int veiculos, float aluguel)
{
    float ganhomultas;
    return ganhomultas = (veiculos/30) * (0.2 * aluguel);

}
//Cálculo do custo com manutenção
float manutencao (int veiculos)
{
    float manutencao;
    return manutencao = 600 * (0.02 * veiculos);

}
//Main
int main (void)
{
    //Abertura do arquivo
    FILE *resultado = fopen("resultado.txt", "w");
    //Declaração de variáveis
    int veiculos;
    float aluguel;
    //Leitura
    scanf("%d %f", &veiculos, &aluguel);
    //Exibição
    printf("%.2f\n%.2f\n%.2f", faturamentoAnual(veiculos,aluguel), multas(veiculos,aluguel), manutencao(veiculos));
    //Escrita no arquivo
    fprintf(resultado, "%.2f\n%.2f\n%.2f", faturamentoAnual(veiculos,aluguel), multas(veiculos,aluguel), manutencao(veiculos));
    //Fechamento do arquivo
    fclose(resultado);
    return 0;
}
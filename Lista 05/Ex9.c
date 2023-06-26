#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 08/05/2023
Objetivo - Ler do teclado ou de um arquivo as matrículas e números de telefone de alunos e escrever em um arquivo 
*/
int main (void)
{
    //Abertura do arquivo de saída
    FILE *arqSaida = fopen("saida.txt", "w");
    //Declaração de variáveis
    int opcao, matricula, telefone, controle = 0;
    //Leitura da opção (teclado ou arquivo)
    printf("Escolha a opção de entrada\n1- pelo teclado\n2- por arquivo\n");
    scanf("%d", &opcao);
    //Teclado
    if (opcao == 1)
    {
        while (matricula>= 0)
        { 
            printf("Digite a Matrícula e o Telefone, digite números negativos para encerrar:\n");
            scanf("%d %d", &matricula, &telefone);
            if (matricula >= 0) fprintf(arqSaida, "%d %d\n", matricula, telefone);
            
        }
    }
    //Arquivo
    else if (opcao == 2)
    {
        FILE *arqEntrada = fopen("entrada.txt", "r");
        while(fscanf(arqEntrada, "%d %d", &matricula, &telefone) != EOF)
        {
            fprintf(arqSaida, "%d %d\n", matricula, telefone);
        }
        fclose(arqEntrada);
    }
    fclose(arqSaida);
    return 0;

}
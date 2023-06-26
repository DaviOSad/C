#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 04/05/2023
*/
int main (void)
{
    //Abertura do arquivo
    FILE *arq = fopen("linhaAlinha.txt", "r");
    //Declaração de variáveis
    char texto[1000];
    int linhas = 0;
    //Leitura do texto do arquivo
    while (fscanf(arq," %[^\n]", texto) != EOF)
    {
        //Impressão do texto na tela
        printf("%s\n", texto);
        //Contagem de linhas
        linhas++;

    }
    //Exibição do número de linhas
    printf("%d", linhas);
    //Fechamento do arquivo
    fclose(arq);
    return 0;
}
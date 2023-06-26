#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 04/05/2023
Objetivo - Ler o texto de um arquivo e escrever na tela quanto 'a' há nele.
*/

int main (void)
{
    //Abertura do arquivo
    FILE *arquivo = fopen("leituraA.txt", "r");
    //Declaração de Variáveis
    int conta = 0;
    char letra;
    //Leitura dos caracteres do arquivo
    while (fscanf(arquivo, " %c", &letra) != EOF)
    {
       //Avaliação se é 'a' ou não
       if (letra == 'a') conta ++; 
       else {}
    }
    //Exibição
    printf("%d", conta);
    //Fechamento do arquivo
    fclose(arquivo);
    return 0;
    
    
}
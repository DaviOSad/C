#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 04/05/2023
Objetivo - Ler um texto de um usuário e escrever em um arquivo.
*/
int main (void)
{
    //Abertura do arquivo
    FILE *texto = fopen("textousuario.txt", "w");
    //Declaração da string 
    char usuario[100];
    //Leitura
    scanf("%[^\n]", usuario);
    //Escrita no arquivo
    fprintf(texto, "%s", usuario);
    //Fechamento do arquivo
    fclose(texto);
    return 0;
}
#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 07/05/2023
Objetivo - concatenar o conteúdo de 2 arquivos em um terceiro.
*/
int main (void)
{
    // Arquivos
    FILE *arq1 = fopen("arquivo1.txt", "r"), *arq2 = fopen("arquivo2.txt", "r"), *arq3 = fopen ("arquivo3.txt", "w");
    // Strings 
    char texto1[1000], texto2[1000];
    //Leitura do primeiro arquivo
    while(fscanf(arq1," %[^\n]", texto1) != EOF) 
    {
        //Escrita do conteúdo do primeiro arquivo no terceiro
        fprintf(arq3,"%s\n", texto1);
    }
    //Leitura do segundo arquivo
    while(fscanf(arq2, " %[^\n]", texto2) != EOF)
    {
        //Escrita do conteúdo do segundo arquivo no terceiro
        fprintf(arq3,"%s\n", texto2);
    }
    //Fechamento dos arquivos
    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    return 0;

}
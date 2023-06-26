#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualzação - 02/05/2023
Objetivo -  Escrever em um arquivo os números de 1 a 10, um em cada linha
*/

int main (void)
{
    //Arquivo
    FILE* num1a10 = fopen("num1a10.txt", "w");
    int num;
    //Escrita dos valores
    for(int controle =1; controle<=10; controle ++) fprintf(num1a10,"%d\n", controle);
    //Fechamento do arquivo
    fclose (num1a10);
    FILE* mum1a10 = fopen("num1a10.txt", "r");
    while (fscanf(num1a10,"%d", &num) != EOF)
    {
        printf("%d\n", num);
    }
    fclose (num1a10);
    return 0;
    
}
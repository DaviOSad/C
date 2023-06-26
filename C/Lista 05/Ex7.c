#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 07/05/2023
Objetivo - Ler uma quantidade N de letras em um arquivo e exibir na tela o número de vogais
*/
int main (void)
{
    //Abertura do arquivo
    FILE *vogais = fopen("vogais.txt", "r");
    //Declaração de variáveis
    int N, controle = 1, quantidade = 0;
    char letra;
    //Leitura da quantidade N de letras
    fscanf(vogais, "%d", &N);
    //Leitura das letras
    while (controle <= N)
    {
        fscanf(vogais," %c", &letra);
        //Determinação se é vogal ou não
        switch (letra)
        {
            //Se é A
            case 'a': case 'A':
            quantidade ++;
            break;
            //Se é E
            case 'e': case 'E':
            quantidade ++;
            break;
            //Se é I
            case 'i': case 'I':
            quantidade ++;
            break;
            //Se é O
            case 'o': case 'O':
            quantidade ++;
            break;
            //Se é U
            case 'u': case 'U':
            quantidade ++;
            break;
            default:
            break;
        }
        controle ++;
    }
    //Exibição
    printf("%d", quantidade);
    //Fechamento do arquivo
    fclose(vogais);
    return 0;

}
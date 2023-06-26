#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 07/05/2023
Objetivo - Calcular e exibir os divisores de um número e guardar em um arquivo a soma desses divisores
*/
int main (void)
{
    //Abertura do arquivo
    FILE *somadiv = fopen("somadiv.txt", "w");
    //Declaração de variáveis
    int num, soma = 0;
    //Leitura do número
    printf("Insira o número: \n");
    scanf("%d", &num);
    //Cálculo dos divisores
    for (int div = 1; div<=num; div ++)
    {
        //Definição se é divisor ou não
        if(num % div == 0) 
        {
        //Exibição
        printf("%d\n", div);
        soma += div;
        }
        else {}
    }
    //Escrita no arquivo
    fprintf(somadiv, "%d", soma);
    //Fechamento do arquivo
    fclose(somadiv);
    return 0;
    
}
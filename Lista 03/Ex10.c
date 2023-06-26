#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 13/04/2023
Objetivo - Receber a idade de um número N de nadadores e deter sua categoria de acordo com uma tabela
*/

//Determinação da categoria
char categoria (int id)
{
    //Se entre 5 e 7 anos
    if (id>=5 && id <=7) return 'F';
    //Se entre 8 e 10 anos
    else if (id>=8 && id <=10) return 'E';
    //Se entre 11 e 13 anos
    else if (id >= 11 && id <=13) return 'D';
    //Se 14 ou 15 anos
    else if (id >= 14 && id <= 15) return 'C';
    //Se 16 ou 17 anos
    else if (id >= 16 && id <= 17) return 'B';
    //Se maior que 18
    else return 'A';

}
//Main
int main (void)
{
    //Variáveis
    int N;
    float id;
    //Leitura do número de nadadores
    scanf("%d", &N);
    //Repetição para leitura de idades e chamada da função
    for (int controle = 1; controle <= N; controle ++)
    {
        //Leitura das idades
        scanf("%f", &id);
        //Exibição e chamada da função
        printf("%c\n", categoria(id));

    }
    return 0;
}
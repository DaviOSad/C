#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última atualização - 12/04/2023
Objetivo - Receber uma quantidade N de alunos, receber suas notas finais e exibir um conceito de acordo com uma tabela.
*/
//Procedimento para determinar o conceito
void conceito (float M)
{
        //Se nota menor que 39 (F)
        if (M<=39) printf("F\n");
        //Se nota entre 40 e 59 (E)
        else if (M>=40 && M<=59) printf("E\n");
        //Se nota entre 60 e 69 (D)
        else if (M>=60 && M<=69) printf("D\n");
        //Se nota entre 70 e 79(C)
        else if (M>= 70 && M<=79) printf("C\n");
        //Se nota entre 80 e 89 (B)
        else if (M>= 80 && M<=89) printf("B\n");
        //Se nota maior que 90 (A)
        else printf("A\n");        
    
}
//Main
int main (void)
{
    //Variáveis
    float N, M;
    //Leitura do número de alunos
    scanf("%f", &N);
    //Repetição para a quantidade de alunos
    for(int controle = 1; controle<=N; controle ++)
    {
    //Leitura da média
    scanf("%f", &M);
    //Chamada do procedimento
    conceito(M);
    }
    return 0;
}
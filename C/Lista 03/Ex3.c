#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última Atualização - 08/04/2023
Objetivo - Receber N conjuntos de 3 valores e exibí-los em ordem crescente.
*/
//Organização em ordem crescente 
void crescente (float n1, float n2, float n3 , int N)
{
        // Estrutura condicional para ordem crescente
        //Se n1 é o maior
        if (n1 >= n2 && n1>=n3)
        {
            //Se n2 maior que n3
            if (n2>=n3) printf("%.0f %.0f %.0f\n", n3, n2, n1);
            //Se n3 maior que n2
            else if (n3>=n2) printf("%.0f %.0f %.0f\n", n2, n3, n1);
        }
        //Se n2 é o maior
        else if (n2>=n1 && n2>=n3)
        {
            //Se n1 maior que n3
            if (n1>=n3) printf("%.0f %.0f %.0f\n", n3, n1, n2);
            //Se n3 maior que n1
            else if (n3>=n1) printf("%.0f %.0f %.0f\n", n1, n3, n2);
        }
        //Se n3 é o maior 
        else if (n3>=n1 && n3>= n2)
        {   
            //Se n1 maior que n2
            if (n1 >= n2) printf("%.0f %.0f %.0f\n", n2, n1, n3);
            //Se n2 maior que n1
            else if (n2 >= n1) printf("%.0f %.0f %.0f\n", n1, n2, n3);
        }
}
//Main
int main (void)
{
    //Declaração de variáveis
    float n1, n2, n3, N;
    //Leitura do número de grupos
    scanf("%f", &N);
    //Estrutura de repetição para receber os números e colocar em ordem crescente 
    for (int controle = 1; controle <= N; controle ++)
    {
        //Leitura dos números 
        scanf("%f %f %f", &n1, &n2, &n3);
        crescente (n1, n2, n3, N);
    }
    return 0;
    
}



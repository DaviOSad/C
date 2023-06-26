#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última alteração -- 03/04/2023
Objetivo - Receber 10 números e verificar se eles são divisiveis por 3 e 9 ao mesmo tempo, por 2 e por 5
*/
int main (void)
{
    //Declaração de variáveis
    int num, d9 = 0, d2 = 0,d5 = 0,n = 0;
    //Leitura e análise dos números
    for(int control=1;control<=10;control++)
    {
        scanf("%d", &num);
        //Divisão por 9 e 3
        if(num%9==0)
        {
            d9++;
        }
        //Divisão por 2
        if (num%2==0)
        {
            d2++;
        }
        //Divisão por 5
        if(num%5==0)
        {
            d5++;
        }
        //Não é divisível
        if(num %3 != 0 && num%9!=0 && num%2!=0 && num%5!=0)
        {
            n++;

        }

    }  
    //Exibição
    for(int controle=1;controle<n;controle++) 
    {
        printf("Número não é divisível pelos valores\n");
    }
    printf("%d Números são divisíveis por 3 e por 9\n", d9);
    printf("%d Números são divisíveis por 2\n", d2);
    printf("%d Números são divisíveis por 5\n", d5);

}
#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última atualização - 12/04/2023
Objetivo - Receber um valor N e calcular S = 1 + 1/1! + ... 1/N!
*/
//Cálculo de fatorial
int fatorial (int num)
{
    int fat = 1;
    for (int fator = 1; fator <= num; fator++)
    {
        fat*= fator;
    }
    return fat;

}
//Cálculo do S
float calculaS (float N)
{
    float S = 0;
    for(int control=0;control<=N;control++)
    {
        S += 1.0/fatorial(control);
    }
    return S;
}

//Main
int main (void)
{
    //Variáveis
    float N;
    //Leitura do número de termos
    scanf("%f", &N);
    //Chamada do calculaS
    printf("%f", calculaS(N));
    return 0;
     
}
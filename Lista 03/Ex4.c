#include <stdio.h>
/*
Autor - Davi Oliveira Sad
Última atualização - 12/04/2023
Objetivo - Receber 3 valores e determinar se é possível formar um triângulo e, caso sim, determinar qual o tipo do triangulo.
*/
//Determinação se é possível e do tipo de triângulo
void triangulo(float a, float b, float c)
{
  //Se é possível
  if (a<b+c && b<a+c && c<a+b)
  {
    //Equilátero (lados iguais)
    if(a==b && a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    //Isosceles (pelo menos dois lados iguais)
    else if(a==b || a==c || b==c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    //Escaleno (todos os lados diferentes)
    else if(a!=b && a!=c && c!=b )
    {
        printf("TRIANGULO ESCALENO\n");
    }
  }
  //Se não é possível
  else printf("NÃO TRIANGULO\n");


}
//Main
int main (void)
{
    //Variáveis
    float a = 0, b = 0, c = 0;
    //Repetição para leitura dos valores e validação
    while(a>=0 && b>=0 && c>=0)
    {
        //Leitura
        scanf("%f %f %f", &a, &b, &c);
        if(a>=0)
        {
        //Chamada do procedimento
        triangulo(a, b, c);
        }
    }
    return 0;
}
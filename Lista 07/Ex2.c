#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca (char* str, char a, int i)
{
  
}

void permutacoes (char* str)
{
    int tamanho = strlen(str);
    for (int i = 0; i <= tamanho; i++)
    {
       
    }
}

int main (void)
{
    char* str = (char*)malloc(5*sizeof(char));
    printf("Digite uma cadeia de caracteres (string): ");
    scanf(" %[^\n]", str);
    permutacoes(str);

    free(str);
    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa
{
    char* nome;
    int dia;
    int mes;
}Pessoa;

int main (void)
{
    int numero = 0;
    Pessoa* niver = (Pessoa*)malloc(40*sizeof(Pessoa));
    for (int i = 0; i<40; i++)
    {
        niver[i].nome = (char*)malloc(31*sizeof(char));
        printf("Pessoa %d:\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", niver[i].nome);
        printf("Dia: ");
        scanf("%d", &(niver[i].dia));
        printf("Mes (em numero. Ex: janeiro -> 1): ");
        scanf("%d", &(niver[i].mes));
    }
    for (int meses = 1; meses<=12; meses++)
    {
        printf("Nascidos no mes %d:\n", meses);
        for (int i = 0; i<40; i++)
        {
            if (niver[i].mes == meses)
            {
                printf("%s: dia %d\n", niver[i].nome, niver[i].dia);
                numero++;
            }
        }
    }



    for (int i = 0; i < 40; i++)
    {
        free(niver[i].nome);
    }
    free(niver);
    return 0;
}
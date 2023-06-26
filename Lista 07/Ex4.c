#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char* str = (char*)malloc(31*sizeof(char));
    printf("String de entrada: ");
    scanf(" %[^\n]", str);
    int tamanho = strlen(str), vogais = 0, consoantes = 0;
    for (int i = 0; i<tamanho; i++)
    {
        switch (*(str+i))
        {
        case 'a': case 'A':
        vogais++;
        break;
        case 'e': case 'E':
        vogais++;
        break;
        case 'i': case 'I':
        vogais++;
        break;
        case 'o': case 'O':
        vogais++;
        break;
        case 'u': case 'U':
        vogais++;
        break;
        default:
        consoantes++;
        break;
        }
    }
    printf("Número de vogais: %d\n", vogais);
    printf("Número de consoantes: %d", consoantes);
    free(str);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char* str = (char*)malloc(100*sizeof(char));
    printf("String de entrada: ");
    scanf(" %[^\n]", str);
    int tamanho = strlen(str);
    printf("String de saída: ");
    for (int i = tamanho ; i>=0; i--)
    {
        printf("%c", *(str+i));
    }
    free(str);
    return 0;
}
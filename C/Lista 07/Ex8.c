#include <stdio.h>

int main() {
    char letra = 'A';
    char* alfabeto = &letra;
    while (*alfabeto <= 'Z') {
        printf("%c ", *alfabeto);
        (*alfabeto)++;
    }

    printf("\n");

    return 0;
}
















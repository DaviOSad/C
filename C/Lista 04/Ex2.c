#include <stdio.h>

int soma (int N)
{
    if (N!=0)
    {
        return N + soma(N/10);
    }
    else return 0;
}

int main (void)
{
    int num;
    scanf("%d", &num);
    printf("%d", soma(num));
}
#include <stdio.h>

int main (void)
{
    int num = 1, a = 1, b, N;
    scanf("%d", &N);
    printf("1 ");
    for (int controle = 1; controle < N; controle ++)
    {   
        printf("%d ", num);
        b = a;
        a = num;
        num = a + b;

    }
    return 0;
}
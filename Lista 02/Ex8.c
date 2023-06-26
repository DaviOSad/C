#include <stdio.h>

int main (void)
{
    int num = 1, a = 1, b, L;
    scanf("%d", &L);
    printf("1 ");
    while (num<L)
    {
        printf("%d ", num);
        b = a;
        a = num;
        num = a + b;
    }

    
    return 0;
}
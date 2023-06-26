#include <stdio.h>

int main (void)
{
    int N, dem = 1;
    float S = 0;
    scanf("%d", &N);
    for(int controle = 1; controle<=N; controle++)
    {
        S += 1.0/dem;
        dem++;
    }
    printf("%.2f", S);
    return 0;
}
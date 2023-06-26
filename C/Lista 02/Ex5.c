#include <stdio.h>
#include <math.h>
/*
Autor - Davi Oliveira Sad
Última alteração -- 03/04/2023
Objetivo - Receber 10 números e verificar se eles são divisiveis por 3 e 9 ao mesmo tempo, por 2 e por 5
*/

int main (void)
{
    float fil, sal, mediasal = 0, mediadem = 0, mediafil = 0, mediafildem=0, maiorsal = 0, m100 = 0, tot;
    while (sal>0)
    {
        scanf("%f %f", &sal, &fil);
        if(sal>0)
        {
            mediasal += sal;
            mediadem++;
            mediafil += fil;
            mediafildem ++;
            if(sal>maiorsal)
            {
                maiorsal = sal;
            }
            if (sal<=100)
            {
                m100 ++;
            }
            tot ++;
        }
        
    }
    printf("%.2f\n", mediasal/mediadem);
    printf("%d\n", (int)mediafil/(int)mediafildem);
    printf("%.2f\n", maiorsal);
    printf("%.2f\n", (m100/tot)*100);
    return 0;
}
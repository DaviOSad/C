#include <stdio.h>

int digitos (int N)
{
  if (N != 0) return 1 + digitos(N / 10);
  else return 0;
}

int main (void)
{
    int num;
    scanf("%d", &num);
    printf("%d", digitos(num));
    return 0;

}
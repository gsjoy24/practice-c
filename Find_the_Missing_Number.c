#include <stdio.h>

int main()
{
  int T;
  scanf("%d", &T);
  for (int i = 0; i < T; i++)
  {
    long long M;
    int A, B, C;
    scanf("%lld %d %d %d", &M, &A, &B, &C);

    int P = A * B * C;

    if (M % P == 0)
    {
      printf("%lld\n", M / P);
    }
    else
    {
      printf("-1\n");
    }
  }

  return 0;
}

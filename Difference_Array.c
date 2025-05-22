#include <stdio.h>
int main()
{
  int T;
  scanf("%d", &T);

  for (int i = 0; i < T; i++)
  {
    int N;
    scanf("%d", &N);
    int A[N], B[N];
    for (int j = 0; j < N; j++)
    {
      scanf("%d", &A[j]);
      B[j] = A[j];
    }

    for (int i = 0; i < N - 1; i++)
    {
      for (int j = i + 1; j < N; j++)
      {
        if (B[i] > B[j])
        {
          int temp = B[i];
          B[i] = B[j];
          B[j] = temp;
        }
      }
    }

    int C[N];

    for (int j = 0; j < N; j++)
    {
      int res = A[j] - B[j];
      C[j] = res < 0 ? -res : res;
    }

    for (int j = 0; j < N; j++)
    {
      printf("%d ", C[j]);
    }
    printf("\n");
  }

  return 0;
}
#include <stdio.h>

void print_even(int A[], int I)
{
  if (I < 0)
  {
    return;
  }

  if (I % 2 == 0)
  {
    printf("%d ", A[I]);
  }

  print_even(A, I - 1);
}

int main()
{
  int N;
  scanf("%d", &N);

  int A[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }

  print_even(A, N - 1);

  return 0;
}
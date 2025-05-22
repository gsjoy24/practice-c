#include <stdio.h>

void odd_even()
{
  int N, even_count = 0, odd_count = 0;
  scanf("%d", &N);
  int A[N];

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < N; i++)
  {
    if (A[i] % 2 == 0)
    {
      even_count++;
    }
    else
    {
      odd_count++;
    }
  }

  printf("%d %d", even_count, odd_count);
  return 0;
}
int main()
{
  odd_even();
  return 0;
}
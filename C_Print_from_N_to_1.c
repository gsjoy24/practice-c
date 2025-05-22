#include <stdio.h>
void print_num(int N)
{
  if (N == 0)
  {
    return;
  }
  if (N == 1)
  {
    printf("%d", N);
    return;
  }

  printf("%d ", N);
  print_num(N - 1);
}

int main()
{
  int N;
  scanf("%d", &N);
  print_num(N);
  return 0;
}
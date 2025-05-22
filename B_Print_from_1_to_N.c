#include <stdio.h>

void print_num(int N, int I)
{
  if (I == N+1)
  {
    return;
  }
  printf("%d\n", I);
  print_num(N, I + 1);
}
int main()
{
  int N;
  scanf("%d", &N);
  print_num(N, 1);
  return 0;
}
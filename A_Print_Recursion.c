#include <stdio.h>

void print_text(int N, int i)
{
  if (i == N)
  {
    return;
  }
  printf("I love Recursion\n");
  print_text(N, i + 1);
}
int main()
{
  int N;
  scanf("%d", &N);

  print_text(N, 0);
  return 0;
}
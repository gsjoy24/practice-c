#include <stdio.h>
int rec(int n)
{
  if (n == 0)
  {
    return;
  }
  rec(n / 10);
  int last = n % 10;
  printf("%d ", last);

  return 0;
}

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    int dig;
    scanf("%d", &dig);
    if (dig == 0)
    {
      printf("%d", dig);
    }
    rec(dig);
    printf("\n");
  }

  return 0;
}
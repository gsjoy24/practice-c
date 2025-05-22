#include <stdio.h>
long long int rec(int n)
{
  if (n == 1)
  {
    return 1;
  }
  long long int res = rec(n - 1);
  return n * res;
}
int main()
{
  int n;
  scanf("%d", &n);
  long long int ans = rec(n);
  printf("%lld", ans);
  return 0;
}
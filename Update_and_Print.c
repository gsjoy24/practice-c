#include <stdio.h>
int main()
{
  int n, location, newValue;
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  };

  scanf("%d %d", &location, &newValue);
  a[location] = newValue;

  for (int i = n - 1; i >= 0; i--)
  {
    printf("%d ", a[i]);
  };

  return 0;
}
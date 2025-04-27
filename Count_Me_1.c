#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  };

  int count_of_two = 0, count_of_three = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
    {
      count_of_two++;
    }
    else if (a[i] % 3 == 0)
    {
      count_of_three++;
    }
  };

  printf("%d %d", count_of_two, count_of_three);
  return 0;
}
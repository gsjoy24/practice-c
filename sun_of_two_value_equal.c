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

  int x;
  scanf("%d", &x);
  int flag = 0;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 1 + i; j < n; j++)
    {
      // printf("%d %d \n", a[i], a[j], a[i] * a[j]);
      if (a[i] + a[j] == x)
      {
        flag++;
        printf("YES");
        break;
      }
    }
  }

  if (flag == 0)
  {
    printf("NO");
  }

  return 0;
}
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int fre[6] = {0};

  for (int i = 0; i < n; i++)
  {
    fre[arr[i]]++;
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d ", fre[i]);
  }

  return 0;
}
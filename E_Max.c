//! Given a number N, and N numbers, find maximum number in these N numbers.

//* Input
//* First line contains a number N (1 ≤ N ≤ 103).

//* Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

//* Output
//* Print the maximum number.

#include <stdio.h>
#include <limits.h>
int main()
{
  int count;
  scanf("%d", &count);

  int max = INT_MIN;

  for (int i = 0; i < count; i++)
  {
    int num;
    scanf("%d", &num);
    if (max < num)
    {
      max = num;
    }
  };
  printf("%d", max);

  return 0;
}
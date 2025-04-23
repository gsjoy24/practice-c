// Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

// absolute value : means to remove any negative sign in front of a number .

// EX : |-5| = 5 , |7| = 7

// Input
// First line contains a number N (1 ≤ N ≤ 105) number of elements.

// Second line contains N numbers (-109  ≤  Ai  ≤  109).

// Output
// Print the absolute summation of these numbers.

#include <stdio.h>
int main()
{
  int n, sum = 0;
  scanf("%d", &n);
  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
    if (a < 0)
    {
      sum -= a[i];
    }

    sum += a[i];
  }

  if (sum < 0)
  {
    sum = -sum;
  }

  printf("%d\n", sum);
  return 0;
}
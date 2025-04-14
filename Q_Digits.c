//! Given a number N. Print the digits of that number from right to left separated by space.

//* Input
//* First line contains a number T (1 ≤ T ≤ 10) number of test cases.

//* Next T lines will contain a number N (0 ≤ N ≤ 109)

//* Output
//* For each test case print a single line contains the digits of the number separated by space.

#include <stdio.h>
int main()
{
  int count;
  scanf("%d", &count);

  for (int i = 0; i < count; i++)
  {
    int num;
    scanf("%d", &num);

    do
    {
      printf("%d ", num % 10);
      num /= 10;
    } while (num != 0);
    printf("\n");
  };

  return 0;
}
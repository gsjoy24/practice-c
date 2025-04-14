//! Given a number N.Print all even numbers between 1 and N inclusive in separate lines.

//* Input
//* Only one line containing a number N(1 ≤ N ≤ 103)            .

//* Output
//* Print the answer according to the required above.If there are no even numbers print - 1.

#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 2; i <= n; i+=2)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    };
  };

  return 0;
}
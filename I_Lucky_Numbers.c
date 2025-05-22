#include <stdio.h>
int main()
{

  int num;
  scanf("%d", &num);
  int first_digit = num / 10;
  int second_digit = num % 10;

  if (second_digit == 0 || first_digit % second_digit == 0 || second_digit % first_digit == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}
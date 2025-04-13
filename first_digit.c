#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  
  int first_digit = n / 1000;
  
  if (first_digit % 2 == 0)
    {
      printf("EVEN");
    }
    else
    {
      printf("ODD");
    }

  return 0;
}

//!  Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
//! Given a lowercase alphabet character. You have to print the next character in the alphabet.

//* Input
//* Only one line containing a lowercase English letter C

//* Output
//* Print the next letter to C in the alphabet.

//* Note
//* The next letter to z is a.

#include <stdio.h>
int main()
{
  char alp;
  scanf("%c", &alp);

  if (alp >= 'a' && alp < 'z')
  {
    printf("%c", alp + 1);
  }
  else if (alp == 'z')
  {
    printf("%c", 'a');
  }

  return 0;
}
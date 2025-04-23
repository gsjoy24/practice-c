#include <stdio.h>
#include <string.h>
int main()
{
  char a[101], b[101];
  scanf("%s %s", &a, &b);

  // int a_length = strlen(a);
  // int b_length = strlen(b);

  // for (int i = 0; i <= b_length; i++)
  // {
  //   a[i + a_length] = b[i];
  // }
  strcat(a, b);

  printf("%s %s", a, b);
  return 0;
}
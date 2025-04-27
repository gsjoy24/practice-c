#include <stdio.h>
int main()
{
  char text[100001];
  gets(text);

  int text_len = strlen(text);

  int count;

  for (int i = 0; i < text_len; i++)
  {
    if (
        text[i] != 'a' &&
        text[i] != 'e' &&
        text[i] != 'i' &&
        text[i] != 'o' &&
        text[i] != 'u')
    {
      count++;
    };
  };

  printf("%d", count);

  return 0;
}
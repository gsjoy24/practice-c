#include <stdio.h>

int is_palindrome(char S[])
{
  int s_len = strlen(S);
  
  for (int i = 0; i < s_len / 2; i++)
  {
    if (S[i] != S[s_len - i - 1])
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  char S[1001];
  scanf("%s", S);

  if (is_palindrome(S))
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }

  return 0;
}
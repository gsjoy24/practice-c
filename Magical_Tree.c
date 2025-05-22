#include <stdio.h>

void print_spaces(int count)
{
  for (int i = 0; i < count; i++)
  {
    printf(" ");
  }
}

void print_stars(int count)
{
  for (int i = 0; i < count; i++)
  {
    printf("*");
  }
}

void print_tree_top(int totalLines)
{
  for (int i = 0; i < totalLines; i++)
  {
    int spaces = totalLines - i - 1;
    int stars = 2 * i + 1;

    print_spaces(spaces);
    print_stars(stars);
    printf("\n");
  }
}

void print_tree_bottom(int totalLines, int N)
{
  int bottomPart = (totalLines - N / 2) - 1;

  for (int i = 0; i < 5; i++)
  {
    print_spaces(bottomPart);
    print_stars(N);
    printf("\n");
  }
}

int main()
{
  int N;
  scanf("%d", &N);

  int totalLines = 5 + (N + 1) / 2;

  print_tree_top(totalLines);
  print_tree_bottom(totalLines, N);

  return 0;
}

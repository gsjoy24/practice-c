#include <stdio.h>
int main()
{
  int case_count;

  scanf("%d", &case_count);

  for (int i = 0; i < case_count; i++)
  {
    int current_farmers, current_days, additional_farmers;
    scanf("%d %d %d", &current_farmers, &additional_farmers, &current_days);

    int total_farmers = current_farmers + additional_farmers;

    int new_days = (current_farmers * current_days) / total_farmers;

    int reduced_day = current_days - new_days;
    printf("%d\n", reduced_day);
  }

  return 0;
}
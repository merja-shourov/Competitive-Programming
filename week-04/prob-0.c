#include <stdio.h>

int main(void)
{
     char value;
     printf("Enter anyhing: ");
     scanf("%c", &value);

     if (value >= '0' && value <= '9')
     {
          printf("%c is integer number\n", value);
     }
     else if (value >= 'a' && value <= 'z' || value >= 'A' && value <= 'Z')
     {
          printf("%c is alphabet\n", value);
     }
     else
     {
          printf("%c is special character\n", value);
     }
}
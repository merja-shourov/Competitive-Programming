/**
 * Question: C Program to check whether the input is a character, digit or a special character.
 * 
 * Sample Input: 
 *   Enter anything: $
 *   Enter anything: 5
 * Sample Output: 
 *   $ is special character
 *   5 is integer number
 */

#include <stdio.h>

int main()
{
     char value;
     printf("Enter anyhing: ");
     scanf("%c", &value);

     if (value >= '0' && value <= '9'){
          printf("%c is integer number\n", value);
     }
     else if (value >= 'a' && value <= 'z' || value >= 'A' && value <= 'Z'){
          printf("%c is alphabet\n", value);
     }
     else{
          printf("%c is special character\n", value);
     }
     return 0;
}
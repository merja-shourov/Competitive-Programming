/*
Qeustion-09: Ask user for two integers a and b. Then swap (interchange) the values of a and b using bitwise XOR (^) operator.
You must not use an extra variable.

Sample Input:
     Enter the first number: 5
     Enter the second number: 9

Sample Output:
     Before swapping:
     a = 5, b = 9
     After swapping:
     a = 9, b = 5

 */

#include<stdio.h>

int main(){
     int a,b;
     printf("Enter the first number: ");
     scanf("%d", &a);
     printf("Enter the second number: ");
     scanf("%d", &b);

     printf("Before swapping\na = %d, b = %d\n", a, b);

     a = a^b;
     b = a^b;
     a = a^b;
     printf("After swapping\na = %d, b = %d\n", a, b);

     return 0;
}

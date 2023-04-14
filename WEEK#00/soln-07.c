/*
Qeustion-07: Ask user for two integers a and b. Then swap (interchange) the values of a and b. 
That means, a should get the value of b and b should get the value of a. Hint: Use an extra variable.
 
Sample Input:
     Enter value of a: 10
     Enter value of b: 20

Sample Output:
     After swapint a = 20 b = 10

 */

#include<stdio.h>

int main(){
     int a,b,temp;

     printf("Enter value of a: ");
     scanf("%d", &a);
     printf("Enter value of b: ");

     scanf("%d", &b);
     temp = a;
     a = b;
     b = temp;

     printf("After swapint a = %d b = %d\n", a, b);

     return 0;
}

/*
Qeustion-08: Ask user for two integers a and b. Then swap (interchange) the values of a and b 
using arithmetic (+, -, *, /) operator. You must not use an extra variable.

 
Sample Input:
     Enter value of a: 10
     Enter value of b: 20

Sample Output:
     After swaping 
     a = 20 
     b = 10

 */

#include<stdio.h>

int main(){
     int a,b;

     printf("Enter value of a: ");
     scanf("%d", &a);
     printf("Enter value of b: ");
     scanf("%d", &b);

     a = a+b;  
     b = a-b; 
     a = a-b; 
     // another methon 
     // a = a*b;
     // b = a/b;
     // a = a/b;



     printf("After swaping \na = %d\nb = %d\n", a, b);

     return 0;
}

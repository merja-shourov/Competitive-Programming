/*
Qeustion-04: Write a C program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, quotient and remainder of the two numbers. 
 
Sample Input:
     enter two number: 10 5
     
Sample Output:
     Sum = 15
     Product = 50
     Difference = 5
     Quotient = 2
     Remainder = 0

 */

#include<stdio.h>

int main(){
     int a,b;
     printf("Enter two numeber: ");
     scanf("%d %d", &a, &b);
     int sum = a+b;
     int product = a*b;
     int difference = a-b;
     int quotient = a/b;
     int remainder = a%b;

     printf("Sum = %d\nProduct = %d\nDifference = %d\nQuotient = %d\nRemainder = %d\n", sum, product, difference, quotient, remainder);
     return 0;
}
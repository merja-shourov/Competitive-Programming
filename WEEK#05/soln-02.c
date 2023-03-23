/**
 * QEUSTION: Write a C program that reads an integer and then computes & prints the factorial of that integer ?
 * 
 * INPUT:
 *   Enter value of n: 5
 * 
 * OUTPUT: 
 *   Factorial of 5: 120
 */

#include<stdio.h>

int main(){
     int n,i;
     printf("Enter value of n: \n");
     scanf("%d", &n);

     int fact = 1;
     for( i=1; i<=n; i++ ){
         fact = fact * i; // fact *= i;
     }

     printf("Factorial of %d: %d\n", n, fact);
     return 0;
}

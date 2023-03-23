/**
 * QUESTION: Write a C program to print all odd numbers from 1 to n (n is user input) using for loop
 * 
 * INPUT: 
 *   Enter a value of n: 15
 * OUTPUT: 
 *   Odd numbers from 1 to n: 1 3 5 7 9 11 13 15 
 */

#include<stdio.h>

int main(){
     int n,i;
     printf("Enter value of n: \n");
     scanf("%d", &n);

     printf("Odd numbers from 1 to n:");
     for( i=1; i<=n; i++ ){
          if( i%2 == 1 )
               printf(" %d", i);
     }
     return 0;
}
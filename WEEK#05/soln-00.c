/**
 * QEUSTION: Write a C program that computes the sum of the series: 3+7+11+…+n, where n is a user input ?
 * 
 * INPUT:
 *   Enter value of n: 11
 * 
 * OUTPUT: 
 *   Sum of the series: 21
 */

#include<stdio.h>

int main(){
     int n,i;
     printf("Enter value of n: \n");
     scanf("%d", &n);

     int sum = 0;
     for( i=3; i<=n; i=i+4 ){
          sum = sum + i;
     }

     printf("Sum of the series: %d\n", sum);
     return 0;
}

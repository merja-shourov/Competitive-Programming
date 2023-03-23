/**
 * QEUSTION: Write a program to compute the following series using while loop: 4+11+18++….+n
 * 
 * INPUT: 
 *   Enter value of n: 11
 * 
 * OUTPUT: 
 *   sum of the series: 15
 */

#include<stdio.h>

int main(){
     int n, sum = 0;
     printf("Enter value of n: ");
     scanf("%d", &n);

     int i = 4;
     while ( i<=n ){
          sum += i;
          i += 7;
     }
     printf("Sum of the series: %d\n", sum);
     return 0;
}

/**
 * Question: Write a C program to read 2 integers: n and r from user and compute the value of nPr= n!/(n-r)!
 * 
 * Sample Input: 
 *   Enter value of n & r: 6 5
 * Sample Output: 
 *   Value of nPr: 720
 */

// 
#include<stdio.h>

int fact(int n);
int main(){
     int n, r;
     printf("Enter value of n & r = ");
     scanf("%d %d", &n, &r);

     if( n > r ){
          int nPr = fact(n)/fact(n-r);
          printf("Value of nPr: %d\n", nPr);
     }else{
          printf("please enter n ≥ r ≥ 0\n");
     }
     return 0;
}

int fact(int n){
     int i,fact = 1;
     
     for( i = n; i > 1; i-- ){
          fact *= i;
     }
     return fact;
}
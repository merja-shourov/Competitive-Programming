/**
 * Question : C Program that prints the odd & the even numbers in an array separately
 * 
 * Sample Input : 
 *   enter array size: 5
 *   Enter arrey element value: 1 3 5 2 4
 * Sample Output: 
 *   Even numbers: 2 4
 *   Odd numbers : 1 3 5
 */

#include<stdio.h>

int main(){
     int i,n;
     printf("Enter array size: ");
     scanf("%d", &n);

     int num_arr[n];
     
     printf("Enter arrey's value: ");
     for( i=0; i<n; i++ ){
          scanf("%d", &num_arr[i]);
     }

     printf("Even numbers: ");
     for( i=0; i<n; i++ ){
          if( num_arr[i] % 2 == 0 ){
               printf("%d ", num_arr[i]);
          }
     }

     printf("\nOdd numbers: ");
          for( i=0; i<n; i++ ){
          if( num_arr[i] % 2 == 1 ){
               printf("%d ", num_arr[i]);
          }
     }

     return 0;
}
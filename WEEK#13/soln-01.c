/**
 * Question : Write a program that prints the no. of odd & no. of even numbers in an array ?
 * 
 * Sample Input : 
 *   Enter array size: 5
 *   Enter arrey's value: 5 6 7 8 9 10
 * 
 * Sample Output: 
 *  No. of even number: 3
 *  No. of odd number:  2
 */

#include<stdio.h>

int main(){
     int i,n;
     int even = 0, odd = 0;
     printf("Enter array size: ");
     scanf("%d", &n);

     int num_arr[n];
     printf("Enter arrey's value: ");
     for( i=0; i<n; i++ ){
          scanf("%d", &num_arr[i]);
     }

     for( i=0; i<n; i++ ){
          if( num_arr[i] % 2 == 0 ){
               even++;
          }else{
               odd++;
          }
     }
     printf("No. of even number: %d\nNo. of odd numbers: %d\n", even, odd);


     return 0;
}
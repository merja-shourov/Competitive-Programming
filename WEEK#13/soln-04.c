/**
 * Question : Write a program reads two arrays from user and then output their product ?
 * 
 * Sample Input : 
 *   Enter array size: 2
 *   Enter first arrey's value: 3 4
 *   Enter second arrey's value: 2 3
 * 
 * Sample Output: 
 *   Product of arreys: 6 12
 */

#include<stdio.h>

int main(){
     int n,i,j;
     printf("Enter arrey size: ");
     scanf("%d", &n);

     int first_arr[n];
     int second_arr[n];
     int sum_arr[n];

     printf("Enter first arrey's value: ");
     for( i=0; i<n; i++ ){
          scanf("%d", &first_arr[i]);
     }

     printf("Enter second arrey's value: ");
     for( i=0; i<n; i++ ){
          scanf("%d", &second_arr[i]);
     }

     // sum of arreys
     for( i=0; i<n; i++ ){
          sum_arr[i] = first_arr[i] * second_arr[i];
     }


     printf("Product of arreys: ");
     for( i=0; i<n; i++ ){
          printf("%d ", sum_arr[i]);
     }

     return 0;
}
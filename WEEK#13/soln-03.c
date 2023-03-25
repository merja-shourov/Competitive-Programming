/**
 * Question : Write	C Program to read two arrays from user, add them, and then output their sum ?
 * 
 * Sample Input : 
 *   Enter array size: 4
 *   Enter first arrey's value: 4 5 6 7
 *   Enter second arrey's value: 1 2 3 4
 * 
 * Sample Output: 
 *   Sum of arreys: 
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
          sum_arr[i] = first_arr[i] + second_arr[i];
     }


     printf("Sum of arreys: ");
     for( i=0; i<n; i++ ){
          printf("%d ", sum_arr[i]);
     }

     return 0;
}
/**
 * Question : C Program to find the largest value in a float type array ?
 * 
 * Sample Input : 
 *   Enter array size: 4
 *   Enter arrey's value(floting point): 9.5 4.2 6.4 7.5
 * 
 * Sample Output: 
 *   Largest value of this array: 9.5
 */

#include<stdio.h>

int main(){
     int i,n;

     printf("Enter array size: ");
     scanf("%d", &n);

     float num_arr[n];
     printf("Enter arrey's value(floting point): ");
     for( i=0; i<n; i++ ){
          scanf("%f", &num_arr[i]);
     }

     float large = num_arr[0];
     for( i=0; i<n; i++ ){
          if( large < num_arr[i] )
               large = num_arr[i];
     }

     printf("Largest value of this array: %.2f\n", large);
     return 0;
}
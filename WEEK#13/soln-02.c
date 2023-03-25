

/**
 * Question : C Program to find the largest value in a float type array ?
 * 
 * Sample Input : 
 *   Enter array size: 5
 *   Enter arrey's value(floting point): 9.5 4.2 6.4 6.2 7.5
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

     for( i=0; i<n; i++ ){

     }
     return 0;
}
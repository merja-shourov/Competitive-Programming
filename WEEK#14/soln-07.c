/*
     Question: Write a C program to put even and odd elements of an array in two separate arrays and show them.

     Sample input:  
          Input size of the array: 10
          Input elements in array: 0 1 2 3 4 5 6 7 8 9

     Sapmple Output: 
          Even elements in array: 0 2 4 6 8
          Odd elements in array: 1 3 5 7 9

*/

#include<stdio.h>

int main(){
     int i, n, j=0, k=0, arr[10], arr2[10], arr3[10];

     
     printf("Input size of the array: ");
     scanf("%d", &n);

     // Input arry element
     printf("Input elements in array: ");
     for( i=0; i<n; i++ ){
          scanf("%d", &arr[i]);
     }

     // Separate even and odd number
     for( i=0; i<n; i++ ){
          if( arr[i] % 2 == 0 ){
               arr2[j] = arr[i];
               j++;
          }else{
               arr3[k] = arr[i];
               k++;
          }
     }
     // Print separated even and odd array:
     printf("Even elements in array: ");
     for( i=0; i<j; i++ ){
          printf("%d ", arr2[i]);

     }

     printf("\nOdd elements in array: ");
     for( i=0; i<k; i++ ){
          printf("%d ", arr3[i]);
     }
     
     return 0;
}


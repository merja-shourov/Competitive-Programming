/*
     Qeustion-08: Write a program that prints ALL indexes in which the smallest value of array is present ?
 ?

     sample input: 
          Enter array size: 5
          Enter array's value: 44 22 42 42 22;

     Sample output:
          All the indexes of array's smallest value: 1 4

*/
#include<stdio.h>

int all_index(int arr[], int size, int smallest_value);

int main(){
     int size, i, smallest_value;
     printf("Enter array size: ");
     scanf("%d", &size);

     int arr[size];
     printf("Enter array's value: ");
     for( i=0; i<size; i++ ){
          scanf("%d", &arr[i]);
     }

     // find smallest value
     smallest_value = arr[0];
     for( i=0; i<size; i++ ){
          if( smallest_value > arr[i] ){
               smallest_value = arr[i];
          }
     }

     all_index(arr, size, smallest_value);

     return 0;
}


int all_index( int arr[], int size, int smallest_value ){
     
     printf("All the indexes of array's smallest value: ");

     int i=0;
     while ( i < size ){

          if( arr[i] == smallest_value ){
               printf("%d ", i);
          }
          i++;
     }
}



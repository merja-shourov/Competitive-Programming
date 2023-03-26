/*
     Qeustion-08: Write a program that prints ALL indexes in which the smallest value of array is present
 ?

     sample input: 
          Enter array size: 5
          Enter array's value: 55 77 88 34 645

     Sample output:
          All the indexes of array's large value: 4

*/
#include<stdio.h>

int all_index(int arr[], int size, int large_value);

int main(){
     int size, i, large_value;
     printf("Enter array size: ");
     scanf("%d", &size);

     int arr[size];
     printf("Enter array's value: ");
     for( i=0; i<size; i++ ){
          scanf("%d", &arr[i]);
     }

     // find large value
     large_value = arr[0];
     for( i=0; i<size; i++ ){
          if( large_value < arr[i] ){
               large_value = arr[i];
          }
     }

     all_index(arr, size, large_value);



     return 0;
}


int all_index( int arr[], int size, int large_value ){
     
     printf("All the indexes of large array's value: ");

     int i=0;
     while ( i < size ){

          if( arr[i] == large_value ){
               printf("%d ", i);
          }
          i++;
     }
}



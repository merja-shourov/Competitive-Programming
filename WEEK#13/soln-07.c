/*
     Qeustion-07: Write a program that searches for a given value (called a search key) in an array and
     prints the first and last index in which that value appears?

     sample input: 
          Enter array size:
          Enter array's value: 
          Enter array's value for search index: 

     sample output:
          first index: 
          last index: 
*/
#include<stdio.h>

int search_index( int arr[],int search_key, int arr_size);

int main(){
     int arr_size, i, search_key;
     printf("Enter array size: ");
     scanf("%d", &arr_size);

     int arr[arr_size];
     printf("Enter array's value: ");
     for( i=0; i<arr_size; i++ ){
          scanf("%d", &arr[i]);
     }

     printf("Enter array's value for search index: ");
     scanf("%d", &search_key);

     search_index(arr, search_key, arr_size);

     return 0;
}


int search_index( int arr[], int search_key,int arr_size){
     int first_idx = -1, last_idx = -2, i;
     
     for( i=0; i<arr_size; i++ ){
          if( arr[i] != search_key ){
               continue;
          }
          if( first_idx == -1){
               first_idx = i;
          }

          last_idx = i;
     }

     if( first_idx == -1 ){
          printf("Not found");
     }else{
          printf("First index: %d\nLast index: %d\n", first_idx, last_idx);
     }

     
}
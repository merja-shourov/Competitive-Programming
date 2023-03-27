/**
 *  Qeustion: Write a program that deletes the first element in an array which matches a search key ?
 * 
 *  Sample Input: 
 *   Enter array size: 5
 *   Enter arrray's value: 5 6 7 5 7
 *  Enter array's value for searc inde: 7
 * 
 * Sample Output: 
 *   After deleting search key value, New array: 5 6 5 7
 * 
 */

#include<stdio.h>

int deleteValue(int arr[],int size,int delete_index);

int main(){
     int i, size, search;  
     printf("Enter array size: ");
     scanf("%d", &size);
     
     int arr[size];
     printf("Enter array's value: ");
     for( i=0; i<size; i++ ){
          scanf("%d", &arr[i]);
     }

     printf("Enter array's value for search index: ");
     scanf("%d", &search);

     // search index:
     int delete_index;

     for( i=0; i<size; i++ ){
          if( arr[i] == search ){
               delete_index = i;
               break;
          }
     }

     // function calling

     deleteValue(arr, size, search);
     return 0;
}

int deleteValue( int arr[],int size,int delete_index){

     int j;
     for( j=0; j<(size-1); j++ ){
          arr[delete_index] = arr[delete_index + 1];
     }
     arr[size-1];

     printf("After deleting search key value, New array: ");

     for( j = 0; j<(size-1); j++ ){
          printf("%d ", arr[j]);
     }
}
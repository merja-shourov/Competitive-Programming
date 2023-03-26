/*
     Qeustion-08: Write a program that prints all the indexes in which a search key appears ?

     sample input: 
          Enter array size: 6
          Enter array's value: 13 55 55 66 55 44
          Enter array's value for search index:  55

     Sample output:
          All the indexes of given array's value: 1 2 4

*/
#include<stdio.h>

int all_index(int arr[], int size, int search);

int main(){
     int size, i, search;
     printf("Enter array size: ");
     scanf("%d", &size);

     int arr[size];
     printf("Enter array's value: ");
     for( i=0; i<size; i++ ){
          scanf("%d", &arr[i]);
     }

     printf("Enter array's value for search index: ");
     scanf("%d", &search);

     all_index(arr, size, search);

     return 0;
}


int all_index( int arr[], int size, int search ){
     
     printf("All the indexes of given array's value: ");

     int i=0;
     while ( i < size )
     {
          if( arr[i] == search ){
               printf("%d ", i);
          }
          i++;
     }
     
}



/**
 *  Qeustion: Write a program that deletes all the elements in an array which match a search key ?
 * 
 *  Sample Input: 
 * 
 * Sample Output: 
 *   
 * 
 */

#include<stdio.h>

int main(){
     int arr[] = { 2, 5, 3, 2, 5 };

     int size = 5;

     printf("Print arrey before delete: \n");
     int k;
     for( k=0; k < size; k++ ){
          printf("%d ", arr[k]);
     }
     printf("\n\n");

     int delete = 5;

     int i=0;
     while( i < size ){

          if( arr[i] == delete ){

               if( i < (size-1) ){

                    for( int j=i; j < (size-1); j++ ){
                         arr[i] = arr[i+1];
                    }
                    size--;
               }
          }else i++;
     }
     
     printf("After deleteing user enter element ");
     for( k=0; k < size; k++ ){
          printf("%d ", arr[k]);
     }

     return 0;
}


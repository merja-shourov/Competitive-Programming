/*
     Question: Passing string as an argument of a function and update that string within the function ?

     Sample input: Null 

     Sapmple Output: 
          Print array element using function : 

*/

#include<stdio.h>

int printArr( int arr[] ,int size){
     
     int i=0;
     while ( i<size ) 
     {
          printf("%d ", arr[i]);
          i++;
     }
     
}

int main(){
     
     int stdAge[] = { 30, 23, 23, 52, 34};

     int size = sizeof(stdAge) / sizeof(int);

     printArr(stdAge, size);


     return 0;
}


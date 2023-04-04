/*
     Question: Write C program to read a r*c matrix A from user (r, c are user inputs) and print the sum of even numbers in A ?

     Sample Input:
          Enter value of r and c: 2 3
          Enter element in matrix:
          2 3 4
          2 3 4

     Expected Output:
          Sum of even number in A matrix: 12

*/

#include<stdio.h>

int main(){
     int r,c,i,j, sumEven = 0;

     printf("Enter value of r and c: ");
     scanf("%d %d", &r, &c);

     int A[r][c];
     printf("Enter element in matrix: \n");

     for( i=0; i<r; i++ ){
          for( j=0; j<c; j++ ){
               scanf("%d", &A[i][j]);
          }
     }

     // Sum even number
     for( i=0; i<r; i++ ){
          for( j=0; j<c; j++ ){
               if( A[i][j] % 2 == 0)
                    sumEven += A[i][j];
          }    
     }
     
     printf("Sum of even number in A matrix: %d", sumEven);
     return 0;
}
/*   Question 00: C program to find transpose of a 3*3 matrix ?

     Sample input: 
          Enter elements in matrix of size 3x3: 
          1 2 3
          1 2 3
          1 2 3
     Expected output:
          Transpose matrix:
          1 1 1
          2 2 2
          3 3 3 
*/ 

#include<stdio.h>

int main(){
     int first[3][3], second[3][3],i,j;

     // Input array element
     printf("Enter elements in matrix of size 3x3: \n");
     for( i=0; i<3; i++ ){
          
          for( j=0; j<3; j++ )
          {
               scanf("%d", &first[i][j]);
          }
     }

     // compute matrix B(sedoncd): the transpose of matrix A(first)
     for( i=0; i<3; i++ ){
          for( j=0; j<3; j++ ){
               second[i][j] = first[j][i];
          }
     }

     // Print the seeond matrix:
     printf("Transpose matrix:  \n");
     for( i=0; i<3; i++ ){
          for( j=0; j<3; j++ ){
               printf("%3d", second[i][j]);
          }
          printf("\n");
     }

     return 0;
}

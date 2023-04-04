/*   Question-01: Write C program to read a 3*5 matrix A from user and  print the  elements of the matrix n*A where n is a decimal number read from user.

Sample Input: 
     Enter value of n: 5;
     Enter array element(3 x 5 ):
     1 1 1 1 1
     1 1 1 1 1
     1 1 1 1 1

Expected Output:
     Result:
     5 5 5 5 5
     5 5 5 5 5
     5 5 5 5 5

*/
 #include<stdio.h>
 
 int main(){
     int A[3][5], n,i,j;

     printf("Enter value of N: ");
     scanf("%d", &n);

     // Read value of matrix A
     printf("Enter array element(3 x 5 ): \n");
     for( i=0; i<3; i++ ){
          for( j=0; j<5; j++ ){
               scanf("%d", &A[i][j]);
          }
     }
     
     printf("Result: \n");
     for( i=0; i<3; i++ ){
          for( j=0; j<5; j++ ){
               
               printf("%5d", A[i][j] * 5);
          }
          printf("\n");
     }

     return 0;
 }
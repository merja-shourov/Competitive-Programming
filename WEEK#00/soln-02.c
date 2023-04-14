/*
 Qeustion-02: Write a program to display the size of different data types in C.

Sample Input: NULL
  
Sample Output:
    The 'int' datatype is            4 bytes
    The 'unsigned int' data type is  4 bytes
    The 'short int' data type is     2 bytes
    The 'long int' data type is      8 bytes
    The 'long long int' data type is 8 bytes
    The 'double' data type is        8 bytes
    The 'float' data type is         4 bytes
    The 'char' data type is          1 bytes
 */

#include<stdio.h>

int main()
{
    printf("The 'int' datatype is \t\t %lu bytes\n", sizeof(int));
    printf("The 'unsigned int' data type is\t %lu bytes\n", sizeof(unsigned int));
    printf("The 'short int' data type is\t %lu bytes\n", sizeof(short int));
    printf("The 'long int' data type is\t %lu bytes\n", sizeof(long int));
    printf("The 'long long int' data type is %lu bytes\n", sizeof(long long int));
    printf("The 'double' data type is\t %lu bytes\n", sizeof(double));
    printf("The 'float' data type is\t %lu bytes\n", sizeof(float));
    printf("The 'char' data type is\t\t %lu bytes\n", sizeof(char));
}
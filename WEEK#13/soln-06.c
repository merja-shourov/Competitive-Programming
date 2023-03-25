/*
     qeustion: C Program to find the number of spaces in a string (character array) ?

     sample input: 
          Enter array size:
          Enter string: I love bangladesh

     sample output:
          Number of space: 2
*/
#include<stdio.h>

int main(){
     int i,space_count=0;

     char str[100];
     printf("Enter string: ");
     gets(str);

     // loop-1 ( for count space )
     for( i=0; str[i] != '\0'; i++ ){
          if( str[i] == ' ' ){
               space_count++;
          }
     }
     printf("Number of space: %d\n", space_count);

     return 0;
}
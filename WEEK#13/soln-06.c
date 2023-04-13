

/*
     Qeustion-07:C Program to find the number of spaces in a string (character array)

     sample input: 
          Input a string: I love coding

     sample output:
          Space count: 2

*/

#include<stdio.h>

int main(){
     int i, count = 0;
     char str[100];
     printf("Input a string: ");
     fgets(str, 100, stdin);

     for( i=0; str[i] != '\0'; i++ ){
          if( str[i] == ' ' )
               count++;
     }
     printf("Space count: %d\n", count);
}
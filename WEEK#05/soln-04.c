/**
 * QEUSTION: Write a program to display all the letters of the alphabet (a-z). 
 * Use two for loops: the 1st one will print all letters in small letters and the 2nd one will print them in capital letters ?
 * 
 * INPUT: NULL
 * 
 * OUTPUT: 
 * a b c d e ……… z
 * A B C D ……… Z
 *  
 */

#include<stdio.h>

int main(){
     char i,j;
     for( i = 'a'; i<='z'; i++){
          printf("%c ", i);
     }
     printf("\n");
     for( j='A'; j<='Z'; j++ ){
          printf("%c ", j);
     }

     return 0;
}

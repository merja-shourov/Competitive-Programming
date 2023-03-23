/**
 * QEUSTION: Write a program to display all decimal digits (i.e., numbers in the range 0 - 9) in reverse order ?
 * 
 * INPUT: NULL
 * 
 * OUTPUT: 9 8 7 6 5 4 3 2 1 0
 *  
 */

#include<stdio.h>

int main(){
     int i;
     for( i=9; i>=0; i-- ){
          printf(" %d", i);
     }

     return 0;
}

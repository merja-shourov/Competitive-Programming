/*
     Question: Passing string as an argument of a function and update that string within the function ?

     Sample input:  Hello World!

     Sapmple Output: hELLO wORLD!
       

*/

#include<stdio.h>
#include<ctype.h>


int changeCase(char str[] );
int main(){
     char str[50];

     printf("Enter a string of length < 50: ");
     fgets(str, 50, stdin);

     // function call
     changeCase(str);

     return 0;
}

int changeCase(char str[] ){
     int z;
     for( z=0; str[z] != '\0'; z++ ){
          if( isupper(str[z]) )
               str[z] = tolower(str[z]);
          else if( islower(str[z]) )
               str[z] = toupper(str[z]);
          
     }

     puts(str);
}


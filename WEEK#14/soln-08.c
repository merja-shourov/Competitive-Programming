/*
     Question: Write a function that searches for a character in a string. The function should print true if found, otherwise print false

     Sample input:  
          Input a string: hello world!
          searcing word: o

     Sapmple Output: 
          searcing word found: true

*/

#include<stdio.h>

int searchWord(char str[], char search ){
     int i,flag = 0;
     for( i=0; str[i] != '\0'; i++ ){
          if( str[i] == search )
               flag = 1;
     }
     return flag;
}

int main(){
     int i;
     char str[100], search;
     printf("Enter a string: ");
     gets(str);
     printf("Enter a chracter: ");
     search = getchar();

     if( searchWord ){
          printf("searcing word found: true\n");
     }else{
          printf("searcing word found: False\n");
     }
     return 0;
}


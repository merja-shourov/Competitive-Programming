/*
     Question: Write a C program that reads a string, create a new string containing all the characters the input string except the vowels in it, and then prints the new string ?

     Sample input:  
          Enter a string: Hello how are you?

     Sapmple Output: 
          Output string: Hll hw r y?

*/

#include<stdio.h>

int main(){

     int i,count = 0;

     char sentence[50];
     gets(sentence);

     for( i=0; sentence[i] != '\0'; i++ ){

          if(sentence[i] == 'a' || sentence[i] == 'e' ||sentence[i] == 'i' || sentence[i] == 'o' ||sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' ||sentence[i] == 'I' || sentence[i] == 'O' ||sentence[i] == 'U' ){
               
               continue;
          }
          printf("%c", sentence[i]);
     }


     return 0;
}




/*
     Question: Write a C program that counts the number of vowels in an input string ?

     Sample input: 
          Write a sentence: Dhaka is addicted to “Cha”

     Sapmple Output: 
          Nuumber of vowels: 8
       

*/

#include<stdio.h>

int main(){
     int i,count = 0;
     char sentence[50];
     gets(sentence);

     for( i=0; sentence[i] != '\0'; i++ ){
          if( sentence[i] == 'a' || sentence[i] == 'e' ||sentence[i] == 'i' || sentence[i] == 'o' ||sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' ||sentence[i] == 'I' || sentence[i] == 'O' ||sentence[i] == 'U' )
               count++;
     }
     printf("Number of vowels: %d\n", count);


     return 0;
}


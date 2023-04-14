/*
Qeustion-06:  Convert Celsius to Fahrenheit unit using the following formula. 
Take the value of C as input from user and calculate the value of F [ F = C * (9/5) + 32 ].


 
Sample Input:
     Enter value of celsius: 36.6
Sample Output:
     Fahrenheit: 97.88
 */

#include<stdio.h>

int main(){
     float c;
     printf("Enter value of celsius: ");
     scanf("%f", &c);
     float f= c*9/5 + 32;
     printf("Fahrenheit: %.2f", f);

     return 0;
}
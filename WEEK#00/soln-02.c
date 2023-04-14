/**
 * Qeustion-01:Write a C program that prompts the user to insert an integer value, a decimal number and his/her nick name and print the inserted value as output.
 * 
 * Sample Input:
 *   Enter a integer: 10
 *   Enter a decimal value: 10.5
 *   Enter your nick name: Aladdin
 * 
 * Sample Output:
     Integer: 10
     Decimal: 10.500000
     Nickname: Aladdin
 * 
 */

#include<stdio.h>

int main(){
     int n;
     float d;
     char nickName[10];
     printf("Enter a integer: ");
     scanf("%d", &n);
     printf("Enter a decimal value: ");
     scanf("%f", &d);
     printf("Enter your nick name: ");
     scanf("%s", nickName);

     printf("Integer: %d\nDecimal: %f\nNickname: %s\n", n, d, nickName);

     return 0;
}
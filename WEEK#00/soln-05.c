/*
Qeustion-05: Write a C program that reads in 3 numbers and prints their average

Sample Input:
     enter three integer: 4 2 1
Sample Output:
    average: 2.33

 */

#include<stdio.h>

int main(){
     int a,b,c;
     float avg;
     printf("enter three integer: ");
     scanf("%d %d %d", &a, &b, &c);
     avg = (a+b+c)/3.0;

     printf("average: %.2f\n", avg);

     return 0;
}
/*
Qeustion-03: Write a C program that reads in the radius of a circle and prints the circle’s diameter, circumference and area.
 
Sample Input:
     Input radius of a circle: 3.5

Sample Output:
     Diameter: 6.28
     Circumference: 21.99
     Area: 38.48

 */

#include<stdio.h>
#define PI 3.14159;
int main(){
     float radius, diameter, circumference, area;
     const float pi = 3.14159;

     scanf("%f", &radius);

     diameter = 2 * pi;
     circumference =  2*pi*radius; 
     area = pi*radius*radius;

     printf("Diameter: %.2f\nCircumference: %.2f\nArea: %.2f\n", diameter, circumference, area);
     return 0;
}
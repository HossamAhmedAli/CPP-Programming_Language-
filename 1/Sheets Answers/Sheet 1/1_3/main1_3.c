/*
    write a program to compute the area of circle
*/
#define pi 3.14159265
#include<stdio.h>
void main(void)
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle = %.2f", pi*radius*radius);
}

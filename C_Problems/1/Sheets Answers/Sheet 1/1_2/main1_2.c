/*
write a program to compute the area of a rectangle
*/
#include<stdio.h>
void main(void)
{
    float width,height;
    printf("Enter width: ");
    scanf("%f",&width);
    printf("Enter height: ");
    scanf("%f",&height);
    printf("Area of rectangle = %.1f",width*height);
}

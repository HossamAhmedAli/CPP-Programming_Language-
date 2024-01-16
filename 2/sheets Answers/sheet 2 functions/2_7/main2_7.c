/*
    write a function to input a value and find the sign of a given integer
*/
#include<stdio.h>
#include<math.h>
#define PI 3.14159265
double get_sin(double number);
void main()
{
    double number;
    printf("enter number: ");
    scanf("%lf",&number);
    printf("Sin(%.1lf)=%lf",number,get_sin(number*PI/180));
}

double get_sin(double number)
{
    return sin(number);
}

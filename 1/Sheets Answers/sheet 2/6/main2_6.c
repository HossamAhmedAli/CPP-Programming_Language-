/* write a program to solve a quadric equation depend on a,b,c the coefficient of the equation */

#include<stdio.h>
#include <math.h>
void main()
{
    float a,b,c,s1,s2;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    s1= ( -b+sqrt((b*b)-4*a*c) ) / ( 2*a);
    s2= ( -b-sqrt((b*b)-4*a*c) ) / ( 2*a);
    printf("output operand_1=%.2f \n output operand_2=%.1f",s1,s2);


}

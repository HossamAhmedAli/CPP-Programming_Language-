/*
    write a program to determine number positive, negative or zero
*/
#include<stdio.h>
void main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if( number > 0) printf("The number is Positive!");
    else if( number < 0) printf("The number is Negative!");
    else printf("Number is zero");

}


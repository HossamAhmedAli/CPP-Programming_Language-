/*
    write a program to determine number odd or even
*/
#include<stdio.h>
void main(void)
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    if( number%2 == 0) printf("The number is even");
    else printf("The number is odd");


}


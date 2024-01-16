/*
    write a program to get several integer numbers and print the range of these numbers */
#include<stdio.h>
void main()
{
    int count,i=1, min, input, max ;

    /* get the count of the number that will be entered*/
    printf("enter count of numbers: ");
    scanf("%d",&count);

    /* get the first number and initiate it as the minimum and the maximum*/
    printf("Enter number %d :",i++);
    scanf("%d",&input);
    min=max=input;

    /* get the rest of the numbers */
    for( i=2; i<=count;i++)
    {
        printf("Enter number %d :",i);
        scanf("%d",&input);
        if( input < min) min=input;
        else if ( input > max) max=input;
    }
    printf("minimum number = %d\nmaximum number = %d",min,max);
}


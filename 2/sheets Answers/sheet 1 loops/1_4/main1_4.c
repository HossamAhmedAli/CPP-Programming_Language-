/*
    write a program to get several integer numbers and print the average of these numbers */
#include<stdio.h>
void main()
{
    int count,i=1,input,average=0 ;

    /* get the count of the number that will be entered*/
    printf("enter count of numbers: ");
    scanf("%d",&count);
    for( i=1; i<=count;i++)
    {
        printf("Enter number %d :",i);
        scanf("%d",&input);
        average+=input;
    }
    average/=count;
    printf("Average=%d",average);
}

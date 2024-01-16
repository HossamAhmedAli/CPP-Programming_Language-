/*
    write a program to get several integer numbers and print the range
    without the two extreme values of these numbers
*/
#include<stdio.h>
void main()
{
    int count,i=1, extreme_min, input, extreme_max ;
    int min,max;

    /* get the count of the number that will be entered*/
    printf("enter count of numbers: ");
    scanf("%d",&count);

    /* get the first number and initiate it as the minimum and the maximum*/
    printf("Enter number %d :",i++);
    scanf("%d",&input);
    extreme_min=extreme_max=max=min=input;

    /* get the rest of the numbers */
    if(count<=2) // in case two numbers only entered by the user
    {
        printf("Enter number 2 :");
        scanf("%d",&input);
        if( input < extreme_min)
        {
            min=extreme_min=input;
        }
        else if ( input > extreme_max)
        {
            max=extreme_max=input;
        }
    } //end if(count <=2)
    else // in case more than 2 number entered by the user
    {
        for( i=2; i<=count;i++)
        {
            printf("Enter number %d :",i);
            scanf("%d",&input);
            if( input==extreme_min && input==extreme_max && input==min && input==max );
            else if ( input > extreme_max)
            {
                max=extreme_max;
                extreme_max=input;
            }
            else if ( input < extreme_min) extreme_min=input;


        } // end for loop
    }//end else


    printf("extreme minimum number = %d \t extreme maximum number = %d\n",extreme_min,extreme_max);
    printf("minimum number = %d \t maximum number = %d",min,max);
}



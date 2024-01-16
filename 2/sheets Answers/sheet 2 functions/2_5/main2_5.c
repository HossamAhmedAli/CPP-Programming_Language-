/*
    write a function to sum natural numbers using iterations and recursion
*/
#include<stdio.h>
/*   Function Declaration */
int iterative_sum_function( int );
int recursive_sum_function( int );

/* Main Program Code */
void main(void)
{
    int number;
    printf("enter number: ");
    scanf("%d",&number);
    printf("sum=%d",recursive_sum_function(number));
}

/* Functions Definitions */
int iterative_sum_function(int number)
{
    int ret=0;
    while(number > 0)
    {
        ret+=number;
    }
    return ret;
}//end function iterative_power_function()

int recursive_sum_function( int number )
{
    if(number != 0)
        return ( number+recursive_sum_function(number-1) );
    else
        return 0;
}//end function iterative_power_function()



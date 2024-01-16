/*
    write a function to input a number and find the factorial of a given integer
    using iterations and recursion
*/
#include<stdio.h>
/*   Function Declaration */
int iterative_factorial_function( int );
int recursive_factorial_function( int );

/* Main Program Code */
void main(void)
{
    int number;
    printf("enter number: ");
    scanf("%d",&number);
    printf("%d! = %d",number,recursive_factorial_function(number));
}

/* Functions Definitions */

int iterative_factorial_function(int number)
{
    // it may take some time to proceed, wait for it.
    int ret=1;
    while(number > 0)
        ret*=number--;
    return ret;
}//end function iterative_power_function()

int recursive_factorial_function( int number )
{
    if ( number <= 1 )
        return 1;
    else
        return ( number * recursive_factorial_function( number - 1 ) );
}//end function iterative_power_function()




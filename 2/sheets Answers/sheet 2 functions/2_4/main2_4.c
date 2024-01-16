/*
    write a function to input a number from user and find power of given number
    using iteration and recursion.
*/
#include<stdio.h>
    /*   Function Declaration */
int iterative_power_function( int, int);
int recursive_power_function( int, int);

    /* Main Program Code */
void main(void)
{
    int base,power;
    printf("enter base: ");
    scanf("%d",&base);
    printf("enter power: ");
    scanf("%d",&power);
    printf("answer=%d",recursive_power_function(base,power));
}

    /* Functions Definitions */
int iterative_power_function( int base, int power)
{
    int ret=1;
    while(power>0)
    {
        ret*=base;
        power--;
    }
    return ret;
}//end function iterative_power_function()

int recursive_power_function( int base, int power)
{

    if(power>0)
        return ( base*recursive_power_function(base,power-1) );
    else
        return 1;

}//end function iterative_power_function()


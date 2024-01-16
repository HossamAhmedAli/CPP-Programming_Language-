/*
        write a program to check number is prime or not
*/
#include<stdio.h>
#define PRIME 1
#define NOT_PRIME 0
char check_prime(int number);
void main(void)
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if(check_prime(number) == PRIME) printf("Number is Prime");
    else printf("Number is not Prime!!");
}
char check_prime(int number)
{
    char ret=PRIME;
    int iteration;
    if( number == 1 || number == 0 ) ret=NOT_PRIME;
    else
    {
        for( iteration=2;  iteration < number ; iteration++)
        {
            if( number % iteration == 0 )
            {
                ret=NOT_PRIME;
                break;
            }//end if
        }// end for loop
    }//end else

    return ret;
}// end check_prime()

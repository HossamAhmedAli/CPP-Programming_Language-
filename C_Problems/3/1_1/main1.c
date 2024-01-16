/*
    write a program in C to separate odd and even integers in separate arrays
*/
#include<stdio.h>
#define MAX_SIZE 50
#define EVEN 1
#define ODD 0
char check_even_odd(int);
void main()
{
    int array[MAX_SIZE],odd_array[MAX_SIZE], even_array[MAX_SIZE];
    int even_array_pointer=0,odd_array_pointer=0; // indicates the current location ready to get data from user
    int user_size;
    int iteration=0; // used in loops
    int longest; // used in the final output
    printf("please Enter the count of elements of the array: ");
    scanf("%d",&user_size);
        /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&array[iteration]);
    }
    /* Now separate Even and odd numbers into separated arrays */
    for(iteration=0; iteration<user_size; iteration++)
    {
        if(check_even_odd(array[iteration]) == EVEN)
        {
            even_array[even_array_pointer]=array[iteration];
            even_array_pointer++;
        }
        else
        {
            odd_array[odd_array_pointer]=array[iteration];
            odd_array_pointer++;
        }
    }//end for loop

    /* Printing both even and odd arrays to show the result */
    /* First get the longest array*/
    if(even_array_pointer>odd_array_pointer) longest=even_array_pointer;
    else if ( odd_array_pointer>even_array_pointer ) longest=odd_array_pointer;
    else
        longest=even_array_pointer; // or longest=odd_array_pointer; which will give the same result

    /* Now print the output */
    printf("\n EVEN        ODD\n");
    for(iteration=0;iteration<longest;iteration++)
    {
        if( (even_array_pointer-1)>=iteration && (odd_array_pointer-1)>=iteration ) // row that contains both even and odd numbers
        printf(" %d\t\t%d\n",even_array[iteration],odd_array[iteration]);
        else if( (even_array_pointer-1)>=iteration &&(odd_array_pointer-1)<=iteration ) // row that contains an even number and empty odd number
        {
            printf(" %d\t\t \n",even_array[iteration]);
        }
        else if( (odd_array_pointer-1)>=iteration && (even_array_pointer-1)<=iteration) // row that contains an odd number and empty even number
        {
            printf("  \t\t%d\n",odd_array[iteration]);
        }
    }
}//end main()

char check_even_odd(int number)
{
    if(number%2==0) return EVEN;
    else
        return ODD;
}

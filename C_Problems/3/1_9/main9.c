/*
    write a program to merge two arrays in to third array
*/
#include<stdio.h>
#define MAX_SIZE 100
void main( void )
{
    int first_array[MAX_SIZE], second_array[MAX_SIZE], third_array[MAX_SIZE], user_size;
    int iteration=0;
    int array_1_pointer=0, array_2_pointer=0, array_3_pointer=0;

    printf("please Enter the count of elements of the first array: ");
    scanf("%d",&user_size);
    /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&first_array[iteration]);
        array_1_pointer++;
    }//end for loop

    printf("please Enter the count of elements of the second array: ");
    scanf("%d",&user_size);
    /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&second_array[iteration]);
        array_2_pointer++;
    }//end for loop

    for(iteration=0; iteration<array_1_pointer; iteration++)
    {
        third_array[array_3_pointer]=first_array[iteration];
        array_3_pointer++;
    }//end for loop

    for(iteration=0; iteration<array_2_pointer; iteration++)
    {
        third_array[array_3_pointer]=second_array[iteration];
        array_3_pointer++;
    }//end for loop

    /* Now print the third array */
    printf("\nThird array\n");
    for(iteration=0; iteration<array_3_pointer; iteration++)
    {
        printf(" %d\n",third_array[iteration]);
    }
}




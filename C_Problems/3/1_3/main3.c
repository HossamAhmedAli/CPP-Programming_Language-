/*
    write a function to get the max number of the array
*/
#include<stdio.h>
#define MAX_SIZE 100
void show_array_max(int array[], int size);
void main( void )
{
    int array[MAX_SIZE], user_size, new_input;
    int iteration=0;
    int array_pointer=0; // points to the index ready to be inserted
    printf("please Enter the count of elements of the array: ");
    scanf("%d",&user_size);
    /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&array[iteration]);
        array_pointer++;
    }//end for loop
    /*    show the output  */
    show_array_max(array,array_pointer);
}//end main()

void show_array_max(int array[], int size)
{
    int index;
    int max=array[0];
    for(index=1;index<size;index++)
    {
        if(array[index] > max )
            max=array[index];
    }
    printf("\nMaximum number is %d\n", max);
}


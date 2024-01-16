/*
    write a program to insert a new value in the array(sorted array)
*/
#include<stdio.h>
#define MAX_SIZE 100
void shift_array_add_value(int arr[],int size, int location,int new_value);
int get_suitable_positon(int array[],int size, int target_number);
int array_pointer=0; // points to the index ready to be inserted
void main( void )
{
    int array[MAX_SIZE], user_size, new_input;
    int iteration=0;
    printf("please Enter the count of elements of the array: ");
    scanf("%d",&user_size);
    /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&array[iteration]);
        array_pointer++;
    }
    /*    Get the new input   */
    printf("\nEnter new value: ");
    scanf("%d",&new_input);
    /* now, shift and add the value of the new input into the array*/
    shift_array_add_value(array, array_pointer, get_suitable_positon(array,array_pointer,new_input), new_input);
    /* Now, print the output after adding the number*/
    printf("\n Sorted Array\n");
    for(iteration=0; iteration<array_pointer; iteration++)
    {
        printf("  %d\n",array[iteration]);
    }
}//end main()

void shift_array_add_value(int arr[],int size, int location,int new_value)
{
    int index=0;
    for( index=(size-1); index>=location; index--)
        arr[index+1]=arr[index];
    arr[location]=new_value;
    array_pointer++;
}//end shift_array_add_value()

int get_suitable_positon(int array[],int size, int target_number)
{
    int index=0; // used in loop
    for(index=0; index<size; index++)
    {
        if( array[index] > target_number)
        {
            return (index); // return the index right before the index
        }
    }
    /* if the target number is the largest in the array*/
    return(size);
}// end get_suitable_positon()

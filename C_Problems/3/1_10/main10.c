/*
    write a program to find reverse of an array
*/
#include<stdio.h>
#define MAX_SIZE 100
void reverse_array(int array[], int size);
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

    reverse_array(array,array_pointer-1);
    /* Now, print the reversed array*/
    printf(" reversed array\n");
    for(iteration=0; iteration<array_pointer; iteration++)
    {
        printf(" %d\n",array[iteration]);
    }//end for loop
}//end main()

void reverse_array(int array[], int size)
{
    int iteration=0;
    int temp_variable;
    for(iteration=0;iteration<=(size/2);iteration++)
    {
        temp_variable=array[iteration];
        array[iteration]=array[size-iteration];
        array[size-iteration]=temp_variable;
    }//end for
}








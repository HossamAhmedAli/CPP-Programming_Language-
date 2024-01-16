/*
    write a function to get the position of a value in an array if exists or return -1 if not found
    using linear search algorithm
*/
#include<stdio.h>
#define MAX_SIZE 100
int linear_get_position(int arr[], int size,int target_value);
void main( void )
{
    int array[MAX_SIZE], user_size, user_target_value, index;
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
    printf("Enter The value you wanna search for: ");
    scanf("%d",&user_target_value);
    index=linear_get_position(array,array_pointer,user_target_value);
    if(index==-1) printf("Value NOT FOUND in the array");
    else printf("--------- Hint: indexes starts from 0 ---------\n OUTPUT: index = %d",index);
}//end main()

int linear_get_position(int arr[], int size, int target_value)
{
    int iteration;
    for(iteration=0; iteration<size; iteration++)
    {
        if (target_value == arr[iteration]) return iteration;
    }//end for loop
    return -1;
}

/*
    write a function to print the values of array
*/
#include<stdio.h>
#define MAX_SIZE 100
void print_Array(int arr[], int size);
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

   print_Array(array,array_pointer);
}//end main()

void print_Array(int arr[], int size)
{
    int iteration=0;
    printf("The values you entered\n");
    for(iteration=0; iteration<size; iteration++)
    {
        printf(" %d\n",arr[iteration]);
    }

}

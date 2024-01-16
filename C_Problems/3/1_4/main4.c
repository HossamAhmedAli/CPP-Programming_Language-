/*
    write a function to get the sum of array using iterative and recursion
*/
#include<stdio.h>
#define MAX_SIZE 100
int iterative_sum_array(int array[], int size);
int recursive_sum_array(int array[], int size);
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
    printf("sum of array=%d",recursive_sum_array(array,array_pointer));
}//end main()
int iterative_sum_array(int array[], int size)
{
    int index=0;
    int sum=0;
    for(index=0; index<size; index++) sum+=array[index];
    return sum;
}//end iterative_sum_array()

int recursive_sum_array(int array[], int size)
{
    /*
    Hint: size is above the  last full filled index by one ..
    example: if   array_pointer=5, it means the full filled array indexes are index0 to index4
    */
    if( (size-1) < 0)
    {
        return 0;
    }
    else
        return (array[size-1]+recursive_sum_array(array,size-1));
}

/* Bubble Sort Algorithm */
#include<stdio.h>
#define MAX_SIZE 100
void Bubble_sort(int arr[], int size);
void main( void )
{
    int array[MAX_SIZE], user_size, new_input;
    int iteration=0;
    int top_array=0; // points to the index ready to be inserted
    printf("please Enter the count of elements of the array: ");
    scanf("%d",&user_size);
    /* get data from user */
    for(iteration=0; iteration<user_size; iteration++)
    {
        printf("Enter element %d: ",iteration+1);
        scanf("%d",&array[iteration]);
        top_array++;
    }//end for loop

    Bubble_sort(array,top_array);
    for(iteration = 0; iteration<top_array; iteration++)
    {
        printf(" %d\n",array[iteration]);
    }

}
void Bubble_sort(int arr[], int size)
{
    int iteration=0, inner_loop=0,temp;
    for (iteration = 0; iteration<size-1; iteration++)
    {
        for (inner_loop = 0; inner_loop < size-iteration-1; inner_loop++)
            if (arr[inner_loop] > arr[inner_loop+1])
            {
                temp = arr[inner_loop];
                arr[inner_loop] = arr[inner_loop+1];
                arr[inner_loop+1] = temp;
            }
    }//end for
}//end Bubble_sort()

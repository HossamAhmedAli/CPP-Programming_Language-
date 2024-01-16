#include<iostream>
using namespace std;

namespace algorithm_select
{

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}//end swap function
void sort_(int arr[], int n)
{
    // loop over the array from 0 to n-2
    for (int i = 0; i < n - 1; i++)
    {
        // find the index of the minimum element in the unsorted part
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }//end inner for loop
        // swap the minimum element with the first element of the unsorted part
        swap(&arr[min_idx], &arr[i]);
    }//end outer for loop
}//end sort()
}//end namespace algorithm_select

namespace algorithm_bubble
{
void sort_(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }//end for
}//end sort()
}//end namespace algorithm_bubble

int main(void)
{
    int arr[100];
    int array_size;
    int user_value;
    cout<<"Enter array (1) size: ";
    cin>>array_size;
    for (int iteration=0;iteration<array_size;iteration++)
    {
        cout<<"Enter element "<<iteration+1<<": ";;
        cin>>arr[iteration];
    }
    algorithm_select::sort_(arr,array_size); // calling the first algorithm
    cout<<"Sorted array by algorithm 1 is:"<<endl;
    for (int iteration=0;iteration<array_size;iteration++)
    {
        cout<<"\t"<<arr[iteration]<<endl;
    }

    /*Now create another array by the user to apply the second algorithm with the same name*/
    cout<<"Enter array (2) size: ";
    cin>>array_size;
    for (int iteration=0;iteration<array_size;iteration++)
    {
        cout<<"Enter element "<<iteration+1<<": ";;
        cin>>arr[iteration];
    }
     algorithm_bubble::sort_(arr,array_size); // calling the second algorithm
     cout<<"Sorted array by algorithm 2 is:"<<endl;
    for (int iteration=0;iteration<array_size;iteration++)
    {
        cout<<"\t"<<arr[iteration]<<endl;
    }

     return 0;
}//end main()



/*
    recursion in Binary Search
*/
#include<stdio.h>
#define max 9
#define NOT_FOUND -1
int bin_search(int arr[],int size, int target_value);
int recursive_binary_search(int arr[], int target_value, int low, int high);
void main()
{
    int array[max]= {11,15,20,25,30,35,44,45,88};
    int ret;
    ret=recursive_binary_search(array,11,0,max-1);
    if(ret != NOT_FOUND) printf("index=%d",ret);
    else printf("NOT FOUND !");


    }
int binary_search(int arr[], int size, int target_value)
{
    int low=0, high=(size-1);
    int mid=low+(high-low)/2;
    while( low != high || target_value==arr[mid] )
    {
        if( arr[mid] == target_value) return mid;
        else if(target_value > arr[mid]) low=mid+1;
        else if ( target_value < arr[mid]) high=mid-1;
        mid=low+(high-low)/2;
    }
    return NOT_FOUND;
}// end binary_search()
int recursive_binary_search(int arr[], int target_value, int low, int high)
{
    int mid;
   if (low > high) return NOT_FOUND;
   mid=low+(high-low)/2;
   if( target_value == arr[mid]) return mid;
   else if (target_value > arr[mid] ) return recursive_binary_search(arr,target_value,mid+1,high);
   else return recursive_binary_search(arr,target_value,low,mid-1);
}

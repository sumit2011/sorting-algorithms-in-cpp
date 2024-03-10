// 5. Merge Sort
#include <stdio.h>
int arr[] = {12, 6, 47, 65, 38, 24, 98, 75, 82, 13, 44, 37}; // global array Decleration for all the sorting Algorithum



void merge(int *arr, int s, int e){
    int mid = (s+e)/2;      // finding midpoint of the array

    int len1 = mid - s + 1; //length of left part of the array
    int len2 = e - mid;     // length of right part of the array
 
    // dynamic memory allocate
    int *first = new int[len1];     // left array
    int *second = new int[len2];    // right array

    // copy values in left part
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    // copy values in right part
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    //merging 2 sorted arrays
    int index1 = 0;
    int index2 = 0;

    mainArrayIndex = s;

    while (index1 < len1 && index2< len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
        
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }  
    // free the memory
    delete []first;
    delete []second;
}

void mergesort(int *arr, int s, int e){
    // base case
    if (s >= e)
    {
        return;
    }
    // mid point
    int mid = (s+e)/2;
    // sorting left part
    mergesort(arr , s , mid);
    // sorting right part
    mergesort(arr , mid+1, e);
    // merging sorted arrays
    merge(arr , s, e); 
}


// For Displaying the sorted array or unsorted also
void Display(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    // int arr[10]= {1,34,32,25,76,68,45,98,23,44};
    int n=12;
    mergesort(arr , 0 , n-1);
    Display(arr,n);
}
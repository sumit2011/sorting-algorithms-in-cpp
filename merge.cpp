// 5. Merge Sort

/* Sorting in this code is   1. Bubble Sort   2. Insertion Sort   3. Selection Sort */
#include <stdio.h>
int arr1[] = {12, 6, 47, 65, 38, 24, 98, 75, 82, 13, 44, 37}; // global array Decleration for all the sorting Algorithum










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
    printf("Array before sorted is -->   ");
    Display(arr1, 12);
    printf("\nArray after sorted is -->   ");
    // 1. BubbleSort(arr1,12);  		output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    // 2. InsertionSort(arr1,12);    output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    // 3. SelectionSort(arr1,12);  	output is -->  6 12 13 24 37 38 44 47 65 75 82 98
    Display(arr1, 12);

    return 0;
}
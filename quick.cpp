// 4. Quick Sort with partition code

#include <iostream>
using namespace std;

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    int value = arr[low];
    arr[low] = arr[j];
    arr[j] = value;

    return j;
}

void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);
        // sort left part of the array
        QuickSort(arr, low, partitionIndex - 1);
        // sort right part of the array
        QuickSort(arr, partitionIndex + 1, high);
    }
}

// dispaly function
void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 34, 32, 25, 76, 68, 45, 98, 23, 44};
    QuickSort(arr, 0, 9);
    display(arr, 10);
    return 0;
}
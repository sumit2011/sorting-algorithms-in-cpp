// 3. Selection sort
# include<iostream>
using namespace std;

// function to perform selection sort
void SelectionSort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        // Assume the current index as the index of the minimum value
        int min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            // If the current element is smaller than the element at min_index, update min_index
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        
        // If min_index is different from i, swap the elements at min_index and i
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

// function to display the array elements
void Display(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

// main function
int main(){
    int arr[10]= {1,34,32,25,76,68,45,98,23,44};
    SelectionSort(arr, 10);
    Display(arr, 10);
    return 0;
}

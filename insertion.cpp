// 2. Insertion sort
# include<iostream>
using namespace std;

void InsertionSort(int *arr, int length)
{
    for (int i = 1; i < length; i++)
    {
        int value = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > value)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = value;
    }
}

int main(){
    int arr[5] = {1,55,3,2,8};
    InsertionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
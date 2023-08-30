// 3. Selection sort
void SelectionSort(int *arr, int length)
{
    for (int i = 0; i < length; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < length; j++)
        {
            if (arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}

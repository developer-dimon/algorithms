

void bubbleSort(int *arr, int size) {
    int tmp, i, j;

    for (i = 0; i < size - 1; ++i)
    {
        for (j = 0; j < size - 1; ++j)
        {
            if (arr[j + 1] < arr[j]) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
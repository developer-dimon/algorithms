void selectSort(int *arr, int size) {
    int tmp, i, j, pos;
    for (i = 0; i < size; ++i) {
        pos = i;
        tmp = arr[i];
        for (j = i + 1; j < size; ++j) {
            if (arr[j] < tmp) {
                pos = j;
                tmp = arr[j];
            }
        }
        arr[pos] = arr[i];
        arr[i] = tmp;
    }
}
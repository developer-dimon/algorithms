void ShakerSort(int *arr, int n) {
    int left, right, i, tmp;
    left = 0;
    right = n - 1;
    while (left <= right) {
        for (i = right; i >= left; i--) {
            if (arr[i - 1] > arr[i]) {
                tmp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = tmp;
            }
        }
        left++;
        for (i = left; i <= right; i++) {
            if (arr[i - 1] > arr[i]) {
                tmp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = tmp;
            }
        }
        right--;
    }
}

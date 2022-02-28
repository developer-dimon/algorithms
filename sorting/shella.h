#include <iostream>

using namespace std;
int i, j, n, d, count;

void Shell(int arr[], int n) {
    d = n;
    d = d / 2;
    while (d > 0) {
        for (i = 0; i < n - d; i++) {
            j = i;
            while (j >= 0 && arr[j] > arr[j + d]) {
                count = arr[j];
                arr[j] = arr[j + d];
                arr[j + d] = count;
                j--;
            }
        }
        d = d / 2;
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
}
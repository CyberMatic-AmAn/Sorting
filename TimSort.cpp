#include<bits/stdc++.h>
using namespace std;

const int RUN = 32;

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}


void insertionSortTimsort(int arr[], int left, int right) {
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i], j = i - 1;
        while (j >= left && arr[j] > temp) arr[j + 1] = arr[j--];
        arr[j + 1] = temp;
    }
}

void timSort(int arr[], int n) {
    for (int i = 0; i < n; i += RUN)
        insertionSortTimsort(arr, i, min(i + RUN - 1, n - 1));
    
    for (int size = RUN; size < n; size *= 2) {
        for (int left = 0; left < n; left += 2 * size) {
            int mid = left + size - 1, right = min(left + 2 * size - 1, n - 1);
            if (mid < right) merge(arr, left, mid, right);
        }
    }
}

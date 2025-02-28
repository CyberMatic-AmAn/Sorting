#include<bits/stdc++.h>
using namespace std;

void countingSort(int arr[], int n) {
    int maxVal = *max_element(arr, arr + n);
    int count[maxVal + 1] = {0};

    for (int i = 0; i < n; i++) count[arr[i]]++;
    int index = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (count[i]--) arr[index++] = i;
    }
}

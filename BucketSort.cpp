#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n) {
    vector<float> buckets[n];
    for (int i = 0; i < n; i++) buckets[int(n * arr[i])].push_back(arr[i]);
    for (int i = 0; i < n; i++) sort(buckets[i].begin(), buckets[i].end());
    int index = 0;
    for (int i = 0; i < n; i++)
        for (float num : buckets[i])
            arr[index++] = num;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int* arr = new int[n];

    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int count = 0, sum = 0;

    for(int i = 0; i < n; ++i) {
        for(int j = i+1; j < n; ++j) {
            if(arr[i] < arr[j]) {
                count++;
            } 
            sum += arr[i] + arr[j];
        }
    }
    if(sum == 0) {
        cout << 0;
    } else {
        cout << count;
    }
    delete[] arr;
    return 0;
}
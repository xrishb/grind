#include<bits/stdc++.h>
using namespace std;

int main() {
    const int n = 9;

    int a[n], b[9];

    int takahashiScore = 0;
    int aokiScore = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    // takahashi's total score
    for(int i=0; i<n; i++) {
        takahashiScore += a[i] + a[i+1];
        aokiScore += b[i] + b[i+1];
    }
    int requiredRuns = takahashiScore - aokiScore;

    cout << requiredRuns;

    return 0;
}
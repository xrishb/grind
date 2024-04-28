#include <bits/stdc++.h>
using namespace std;

int main() {
    // libar : a, bob : b
    int a, b;
    cin >> a >> b;
    
    // years
    int years;

    // untill libar is smaller than bob, libar gets 3x, bob gets 2x
    while(a < b) {
        a *= 3;
        b *= 2;

        if(a > b) {
            break;
        }
        years++;
    }

    cout << years;

    return 0;
}
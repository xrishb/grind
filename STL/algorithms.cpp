#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// algorithm : contains vast range of algorithms that we can use.

int main(void) {
    vector<int> vec = {1,2,5,7,-2};

    auto min = min_element(vec.begin(), vec.end());
    auto min = max_element(vec.begin(), vec.end());

    // sort the vector
    sort(vec.begin(), vec.end());

    // reverse sort
    sort(vec.rbegin(), vec.rend());

    // more upcoming
}
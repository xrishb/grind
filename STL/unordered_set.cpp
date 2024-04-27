#include<unordered_set>
#include<algorithm>
#include<iostream>

using namespace std;
// unordered set: similiar to set but it stores elements in unordered manner.


int main() {
    unordered_set<int> uset = { 1000, 300, 400, 200};

    uset.insert(2000);
    uset.erase(1000);
    
    // size(), count(), find()
}
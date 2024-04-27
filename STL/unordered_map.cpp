#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

int main() {
    unordered_map<int, string> umap = 
    {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"}
    };

    // methods
    // insert()	insert one or more key-value pairs
    // count()	returns 1 if key exists and 0 if not
    // find()	returns the iterator to the element with the specified key
    // at()	returns the element at the specified key
    // size()	returns the number of elements
    // empty()	returns true if the unordered map is empty
    // erase()	removes elements with specified key
    // clear()
    return 0;
}
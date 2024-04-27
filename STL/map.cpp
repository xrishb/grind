#include<map>
#include<algorithm>
#include<iostream>

using namespace std;

// map : maps are assosiative containers which stores elements in key value pairs. (unique)

int main(void) {
    map<string, int> mp;
    mp["one"] = 1;
    mp["twp"] = 2;
    mp["three"] = 3;

    // important methods
    // begin() – Returns an iterator to the first element in the map.
    // end() – Returns an iterator to the theoretical element that follows the last element in the map.
    // size() – Returns the number of elements in the map.
    // max_size() – Returns the maximum number of elements that the map can hold.
    // empty() – Returns whether the map is empty.
    // pair insert(keyvalue, mapvalue) – Adds a new element to the map.
    // erase(iterator position) – Removes the element at the position pointed by the iterator.
    // erase(const g)– Removes the key-value ‘g’ from the map.
    // clear() – Removes all the elements from the map.
}
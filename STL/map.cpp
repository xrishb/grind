#include<map>
#include<algorithm>
#include<iostream>

using namespace std;

// map : maps are assosiative containers which stores elements in key value pairs. (unique).
// we can use indexing in maps

int main(void) {
    map<string, int> mp = {{"one", 1}, {"two", 2}, {"three", 3}};
    mp.insert({"four", 4});
    // alternative syntax using make_pair
    mp.insert(make_pair("five", 5));
    mp.erase("five"); // key indexing

    // find() : returns iterator pointing to the key
    auto iter = mp.find("two");

}
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // vector index starts from 0
    vector<int> vec = {1,2,3,4,5};
    vector<int> vec2 = {10,9,8,7,6};

    // initialize with a single value
    // vector<type> name(size, value);
    vector<int> longVec(3, 5);
    
    // use for each loop
    for (int value : longVec) {
        cout << value << " ";
    }

    // important methods

    // front() : points at starting element
    cout << "\nfront element: "<< vec.front();

    // back() : points at the end , its an iterator
    // cout << vec.end();

    // push_back() : adds an element to the end of vector
    vec.push_back(6);

    // pop_back() : removes last element
    vec.pop_back();

    // size() : returns the vector capacity
    cout << "\nsize of the vector: " << vec.size();

    // insert() : allows to insert values at the position , requires iterator
    vec.insert(vec.begin()+2, 10);

    // erase() : erases element from the position
    vec.erase(vec.begin()+2);

    // clear() : clears the entire vector
    vec2.clear();

    // at() : points at given index
    cout << "\nelement at 2nd position: "<< vec.at(2);

    // for each
    cout << "\nvector elements: ";
    for (int value : vec) {
        std::cout << value << " ";
    }

    // swap() : vec.swap(vec2);
    // sort() : sort(vec.begin(), vec.end())
    // sort() : sort(vec.rbegin() , vec.rend())

    // shrink_to_fit() : removes unnecessary memory usage
    vec.shrink_to_fit();
    cout << "\nnew size: " << vec.size();

    // other methods

    // empty() : check if vector is empty
    cout << "\nis vector empty: " << boolalpha << vec.empty();


    // reserve() : reserves size of the vector
    vec.reserve(10);
    
    // capcity() : returns vector capcity
    cout << "\nvector capacity: " << vec.capacity();

    // resize() : resize vector to provided value
    vec.resize(5);

    cout << "\nvector capacity after performing resize(): " << vec.capacity();

    // count() : counts the frequency of a value appeared
    int tCount = count(vec.begin(), vec.end(), 2);
    cout << "\ntotal occurences of 2: " << tCount;

    return 0;
}
#include<list>
#include<algorithm>
#include<iostream>

using namespace std;

// list is a container class which allows to store elements in non-contagious memory location, as compared to vector it has slower traversal, faster insertion and deletion o(1). 
// list follows double linked list approach. for singly linked list forward_list is used.

int main(void) {
    // define a list
    list<int> ls = {1,2,3,4,5};
    
    // important methods are same as vector class
    ls.push_back(6);
    ls.pop_back();
    ls.push_front(0);
    ls.pop_front();
    ls.reverse();
    ls.sort();
    ls.size();

    // unique() : removes all duplicate elements from the list
    ls.unique(ls);
    //merge() : merges two lists into one
}
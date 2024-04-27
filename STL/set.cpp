#include<set>
#include<iostream>
#include<algorithm>

using namespace std;

// set is assosiative container in stl, which holds unique values. set is immutable. elements are sorted already. can't use indexing []
int main(void) {

    set<int> val = {1,2,3,6,5};

    // sort a set in descending order -> set<int, greater<int>> name;

    // important methods in set
    val.insert(-2);
    val.erase(4); // removes 2 from the set
    // empty(), size(), clear(), count() 

    for(int value : val) {
        cout << value << " ";
    }
}
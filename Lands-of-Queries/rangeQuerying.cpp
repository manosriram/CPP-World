#include "../templateFunctions.hpp"
#include <algorithm>

/*
    1. equal(...) -> Checks if both the entities are of same-size and all of the elements in it are equal.
    2. lexicographical_compare(f1, f2, l1, l2) -> Returns True if the range [f1, l1] compares lexographically less than the range [f2, l2).
    3. mismatch(...) -> The first position where both the entity values are mismatching.
*/


int main() {
    vector<int> a{1,2,3}, b{1,2,3,4};
    vector<int>::iterator itr;

    bool areEqual = equal(a.begin(), a.end(), b.begin());
    print("areEqual: ");
    print(areEqual);
    cout << endl;

    auto pairItr2 = lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    print("lexicographical_compare: ");
    print(pairItr2);
    
    cout << endl;
    
    auto pairItr1 = mismatch(a.begin(), a.end(), b.begin());
    print("mismatch: ");
    print(*pairItr1.second);
}

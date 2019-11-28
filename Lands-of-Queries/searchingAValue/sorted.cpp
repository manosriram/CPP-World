#include "../../templateFunctions.hpp"
/*
    1. equal_range(f1, f2, last) -> Returns the bounds of the subarrays that includes all of the elements in the range [f1, l1).
    2. binary_search(...) -> Classic Binary Search. Returns whether the element is found or not in O(logn) time.
*/
int main() {
    vector<int> a{1, 2, 3, 4, 5, 6, 7};

    auto itrPair1 = equal_range(a.begin(), a.end(), 4);  
    print(*itrPair1.first);

    cout << endl;

    bool isFound = binary_search(a.begin(), a.end(), 5);
    print(isFound);
}

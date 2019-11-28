#include "../../templateFunctions.hpp"

/*
    1. find(f1, f2, val) -> Returns iterator pointing to that value.
    2. adjacent_find(...) -> Returns iterator to the first value where it is equal to its adjacent element.
*/

int main() {
    vector<int> a{3, 1, 44, 12, 54, 100, 123, 423}, b{1, 4, 2, 3, 3, 9, 9, 5, 19, 23};

    auto itrPair1 = find(a.begin(), a.end(), 123);  
    print(*itrPair1);

    cout << endl;

    auto itrPair2 = adjacent_find(b.begin(), b.end());
    print(*itrPair2);
}

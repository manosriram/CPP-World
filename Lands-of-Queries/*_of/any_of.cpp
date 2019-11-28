#include "../../templateFunctions.hpp"

/*
    Any of the elements returns true for the predicate. @returnType -> boolean
*/

int main() {
    vector<int> a{2, 4, 6, 7};

    printVector(a);

    bool isAnyOdd = any_of(a.begin(), a.end(), [](auto x){return x % 2 != 0;});

    print(isAnyOdd);
}

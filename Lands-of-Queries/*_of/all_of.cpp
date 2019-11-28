#include "../../templateFunctions.hpp"

/*
    All of the elements returns true for the predicate. @returnType -> boolean
*/

int main() {
    vector<int> a{2, 4, 6, 8, 10};

    printVector(a);

    bool areEven = all_of(a.begin(), a.end(), [](auto x) { return x % 2 == 0;});
    
    print(areEven);
}

#include "../../templateFunctions.hpp"



int main() {
    vector<int> a{2, 4, 6, 8};
    
    printVector(a);

    bool areNoneOdd = none_of(a.begin(), a.end(), [](auto x) {return x % 2 != 0;});

    print(areNoneOdd);
}

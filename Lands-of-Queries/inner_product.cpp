#include <algorithm>
#include <numeric>
#include "../templateFunctions.hpp"
using namespace std;

int main() {
    vector<int> a{10, 20, 30}, b{1, 2, 3};
    int init = 100;

    printVector(a);

    init = inner_product(a.begin(), a.end(), b.begin(), init); // init = (1 * 10) + (2 * 20) + (3 * 30) + 100;

    print(init);
}

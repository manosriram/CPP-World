#include "../templateFunctions.hpp"

int main() {
    vector<int> a{10, 20, 40, 15, 23, 51, 123, 998};

    auto maxElement = max_element(a.begin(), a.end());
    print(*maxElement);

    cout << endl;

    auto minElement = min_element(a.begin(), a.end());
    print(*minElement);

    cout << endl;

    auto minMaxElement = minmax_element(a.begin(), a.end());
    cout << *minMaxElement.first << " " << *minMaxElement.second << endl;
}

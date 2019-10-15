#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <class IT>
void printVector(vector<IT> v) {
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    cout << '\n';
    return;
}

int main() {
    vector<int> v;

    // Filling vector v.

    v.__emplace_back(0);
    v.__emplace_back(1);
    v.__emplace_back(4);
    v.__emplace_back(5);

    v.__emplace_back(2);
    v.__emplace_back(3);
    v.__emplace_back(8);
    v.__emplace_back(9);

    printVector(v);  // 0 1 4 5 2 3 8 9
    inplace_merge(v.begin(), v.begin() + 4, v.end());
    printVector(v);  // 0 1 2 3 4 5 8 9
}
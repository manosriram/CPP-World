#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    cout << '\n';
    return;
}

int main() {
    vector<int> v, newV;

    // Filling vector v.
    for (int t = 0; t < 10; t++)
        v.__emplace_back(t);

    printVector(v);  // 0 1 2 3 4 5 6 7 8 9
    transform(v.begin(), v.end(), back_inserter(newV), [](auto &x) { return ++x; });
    printVector(newV);  // 1 2 3 4 5 6 7 8 9 10
}
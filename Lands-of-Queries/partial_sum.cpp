#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

template <class IN>
void printVector(vector<IN> v) {
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    cout << '\n';
    return;
}

int main() {
    vector<int> v, newV;

    // Filling vector v.
    for (int t = 0; t <= 5; t++)
        v.__emplace_back(t);

    printVector(v);  // 0 1 2 3 4 5
}
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
    vector<int> v;

    // Filling vector v.
    for (int t = 9; t >= 0; t--)
        v.__emplace_back(t);

    v.__emplace_back(0);

    printVector(v); // 9 8 7 6 5 4 3 2 1 0 0
    auto partitionPoint = stable_partition(v.begin(), v.end(), [](auto v) { return v % 2 != 0; });
    printVector(v); // 9 7 5 3 1 8 6 4 2 0 0
}
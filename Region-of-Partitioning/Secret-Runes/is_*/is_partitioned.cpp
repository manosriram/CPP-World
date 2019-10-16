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
    for (int t = 0; t < 10; t++)
        v.__emplace_back(t);

    partition(v.begin(), v.end(), [](auto v) {return v % 2 != 0;});
    auto isPartitioned = is_partitioned(v.begin(), v.end(), [](auto v) {return v % 2 != 0;});
    cout << isPartitioned << '\n'; // 1
}
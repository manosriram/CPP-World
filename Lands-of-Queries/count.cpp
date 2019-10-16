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
    vector<int> v;

    // Filling vector v.
    for (int t = 0; t < 10; t++)
        v.__emplace_back(0);

    for (int t = 0; t < 2; t++)
        v.__emplace_back(1);

    printVector(v);  // 0 0 0 0 0 0 0 0 0 0 1 1

    int zeroCount = count(v.begin(), v.end(), 0);
    int oneCount = count(v.begin(), v.end(), 1);

    cout << zeroCount << " " << oneCount << '\n';
}
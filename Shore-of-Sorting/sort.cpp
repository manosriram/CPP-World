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
    for (int t = 9; t >= 0; t--)
        v.__emplace_back(t);

    printVector(v);  // 9 8 7 6 5 4 3 2 1 0
    sort(v.begin(), v.end());
    printVector(v);  // 0 1 2 3 4 5 6 7 8 9
}
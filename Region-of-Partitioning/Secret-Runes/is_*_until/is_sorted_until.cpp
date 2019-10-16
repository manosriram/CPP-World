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


    
    stable_sort(v.begin(), v.end());

    v.__emplace_back(4);
    v.__emplace_back(1);
    v.__emplace_back(-12);

    printVector(v); // 0 1 2 3 4 5 6 7 8 9 4 1 -12
    auto isSortedUntil = is_sorted_until(v.begin(), v.end());

    cout << *isSortedUntil << '\n'; // 4
}
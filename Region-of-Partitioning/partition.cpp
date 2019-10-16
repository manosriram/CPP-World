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


    printVector(v); // 0 1 2 3 4 5 6 7 8 9 
    auto partitionPoint = partition(v.begin(), v.end(), [](auto v) { return v % 2 != 0; });
    printVector(v); // 9 1 7 3 5 4 6 2 8 0 
    cout << *partitionPoint << endl; // 4
}
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
    
    make_heap(v.begin(), v.end());
    auto isHeapUntil = is_heap_until(v.begin(), v.end());
    v.__emplace_back(12);

    printVector(v); // 9 8 6 7 4 5 2 0 3 1 12
    cout << *isHeapUntil << '\n'; // 12
}
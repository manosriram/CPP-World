#include <iostream>
#include <vector>
using namespace std;

template <class C>
void printVector(vector<C> v) {
    for (auto itr = v.begin(); itr != v.end(); itr++) {
        cout << *itr << " ";
    }
    cout << '\n';
    return;
}

int main() {
    vector<float> v;

    // Filling vector v.
    for (int t = 0; t < 10; t++)
        v.__emplace_back(t);

    make_heap(v.begin(), v.end());
    printVector(v);
    v.__emplace_back(8.88);
    push_heap(v.begin(), v.end());
    printVector(v);
}
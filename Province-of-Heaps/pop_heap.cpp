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
    vector<int> v;

    // Filling vector v.
    for (int t = 0; t < 10; t++)
        v.__emplace_back(t);

    make_heap(v.begin(), v.end());

    printVector(v);
    pop_heap(v.begin(), v.end());

    printVector(v);
    cout << v[v.size() - 1] << '\n';  // Popped element moved to last block.
}
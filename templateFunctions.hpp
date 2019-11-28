#include <iostream>
#include <vector>
using namespace std;

template <class T>
void printVector(vector<T> v) {

    for (auto t : v)
        cout << t << " ";

    return;
}

template<class T>
void print(T x) {
    cout << x;
    return;
}

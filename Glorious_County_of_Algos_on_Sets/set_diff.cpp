#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a {1, 2, 3, 4}, b {3, 4, 5, 6};
    vector<int> res;

    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(res));

    for (auto el: res)
        cout << el << " ";
}


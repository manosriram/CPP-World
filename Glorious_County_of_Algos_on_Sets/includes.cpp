#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a {1, 2, 3, 4}, b {3, 4, 5, 6};

    auto res = includes(a.begin(), a.end(), b.begin(), b.end());
    cout << res << endl;
}


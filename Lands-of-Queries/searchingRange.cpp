#include "../templateFunctions.hpp"

int main() {
    vector<int> a{50, 10, 20, 30, 40, 50, 60, 70, 40, 80, 90}, b{40, 50, 60};

    auto itr1 = search(a.begin(), a.end(), b.begin(), b.end());
    print(*itr1);

    cout << endl;

    auto itr2 = find_end(a.begin(), a.end(), b.begin(), b.end());
    print(*itr2);

    cout << endl;

    auto itr3 = find_first_of(a.begin(), a.end(), b.begin(), b.end());
    print(*itr3);
}

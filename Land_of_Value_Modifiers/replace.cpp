#include <iostream>
#include <vector>

int main() {
    std::vector<int> res {1, 2, 2, 3, 2};

    replace(res.begin(), res.end(), 2, 20);

    for (auto el: res)
        std::cout << el << " ";
}

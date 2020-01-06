#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> res(5);

    iota(res.begin(), res.end(), 4);

    for (auto el: res)
        std::cout << el << " ";
}


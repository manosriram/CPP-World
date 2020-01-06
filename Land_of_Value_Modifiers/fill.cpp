#include <iostream>
#include <vector>

int main() {
    std::vector<int> res(5);
    
    std::fill(res.begin(), res.end(), 64);    

    for (auto el: res)
        std::cout << el << " ";
}


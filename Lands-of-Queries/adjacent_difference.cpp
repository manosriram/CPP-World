#include <iostream>
#include <numeric> // adjacent_difference
#include <vector>
#include "../templateFunctions.hpp"
using namespace std;

int main() {
   vector<int> v{1, 2, 4, 8, 16, 32}; 

   printVector(v);

   adjacent_difference(v.begin(), v.end(), v.begin());

   printVector(v);
}

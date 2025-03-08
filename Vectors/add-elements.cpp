#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> vec;

    // Adding elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for (const int &x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

// Note: It is safe to use .at() method 

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Change the value of vector using []:" << std::endl;   
    std::cout << "Before: " << vec[0] << std::endl;
    vec[0] = 10;
    std::cout << "After: " << vec[0] << std::endl;

    std::cout << "\nChange using .at()" << std::endl;
    std::cout << "Before: " << vec.at(0) << std::endl;
    vec.at(0) = 20;
    std::cout << "After: " << vec.at(0) << std::endl;
    return 0;
}
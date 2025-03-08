#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Accessing elements using []:" << std::endl;
    std::cout << vec[0] << std::endl;
    std::cout << vec[1] << std::endl;

    std::cout << "\nAcessing elememts using .at() method:" << std::endl;
    std::cout << vec.at(0) << std::endl;
    std::cout << vec.at(1) << std::endl;
    std::cout << vec.at(vec.size() - 1) << std::endl;

    std::cout << "\nAccessing elements using .front() and .back() method:" << std::endl;
    std::cout << vec.front() << std::endl;
    std::cout << vec.back() << std::endl;
    return 0;
}
#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> vec;
    
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i + 1);
    }
    
    for (const auto &ele : vec)
    {
        std::cout << ele << " ";
    }
    std::cout << std::endl;
    return 0;
}
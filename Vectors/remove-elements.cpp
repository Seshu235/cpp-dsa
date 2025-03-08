#include <iostream>
#include <vector>

void display(const std::vector<int>& vec) {
    for (const int &x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    std::cout << "Before Removing elements:" << std::endl;
    display(vec);

    // Remove elements from vector
    vec.pop_back();
    vec.pop_back();

    std::cout << "\nAfter Removing elements:" << std::endl;
    display(vec);
}
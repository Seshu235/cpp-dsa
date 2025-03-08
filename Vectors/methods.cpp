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
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2;

    // Assign a specific number of copies of a value
    std::cout << "Assign a specific number of copies of a value\n";
    vec2.assign(5, 10);
    display(vec2);

    // Assign from other vector (range of elements)
    std::cout << "\nAssign from other vector\n";
    vec2.assign(vec1.begin(), vec1.end());
    display(vec2);

    // Assign from an initializer list
    std::cout << "\nAssign from an initializer list\n";
    vec1.assign({1, 2, 3, 4, 5});
    display(vec1);

    return 0;
}
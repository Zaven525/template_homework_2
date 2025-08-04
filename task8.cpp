#include <iostream>
#include <string>

template<typename T>
auto findMax(const T& a, const T& b) { return a > b ? a : b; } 

template<typename T>
auto findMin(const T& a, const T& b) { return a < b ? a : b; };
int main() {
    std::cout << findMax(3, 4) << std::endl;
    std::cout << findMax("asdf1", "asdf2") << std::endl;
    std::string a = "A";
    std::string b = "B";
    std::cout << findMax(a, b) << std::endl;

    std::cout << findMin(3, 4) << std::endl;
    std::cout << findMin("asdf1", "asdf2") << std::endl;
    std::cout << findMin(a, b) << std::endl;
}
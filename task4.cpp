#include<iostream>
#include<cmath>
template<typename T>
T multiply(const T& a, const T& b) {
    return a * b;
}

template<>
int multiply(const int& a, const int& b) {
    return a * b;
}

template<>
double multiply(const double& a, const double& b) {
    return std::round(a * b * 100) / 100;
}
template<>
std::string multiply(const std::string& a, const std::string& num) {
    int n = std::stoi(num);
    std::string mul;
    for (int i = 0; i < n; i++) {
        mul += a;
    }
    
    return mul;
}

int main() {
    std::cout << multiply(3, 9) << std::endl;
    std::cout << multiply(3.2, 9.1232) << std::endl;
    std::string a{"Hello"}, b{"3"};
    std::cout << multiply(a, b) << std::endl;

    return 0;
}
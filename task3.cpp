#include <iostream>
#include <vector>
#include<iomanip>
#include<sstream>
template<typename T>
T sumContainer(std::vector<T> a) {}

template<>
int sumContainer(std::vector<int> a) {
    int sum = 0;
    for (const auto& i : a) {
        sum += i;
    }
    return sum;
}

// template<>
// std::stringstream sumContainer(std::vector<double> a) {
//     double sum = 0;
//     for (const auto& i : a) {
//         sum += i;
//     }
//     std::stringstream oss;
//     return oss << std::fixed << std::setprecision(2) << sum;
// }

template<>
std::string sumContainer(std::vector<std::string> a) {
    std::string sum;
    for (const auto& i : a) {
        sum += i;
    }

    return sum;
}

int main() {
    std::vector<std::string> a{"Hello", "World"};
    std::cout << sumContainer(a);
    return 0;
}
#include <iostream>
#include <iomanip>
template<typename T>
void printValue(const T& a) {
    std::cout << a << std::endl;
}

template<>
void printValue<int> (const int& a) {
    std::cout << "Integer: " << a << std::endl;
}

template<>
void printValue<double> (const double& a) {
    std::cout << std::fixed << std::setprecision(2) << a << std::endl;
}

template<>
void printValue<char*> (char* const& a) {
    for (int i = 0; a[i] != '\0'; i++) {
        std::cout << a[i]-('A' - 'A') << std::endl;
    }
}

int main() {
    printValue("alsdfj");

    return 0;
}
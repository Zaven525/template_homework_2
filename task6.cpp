#include <iostream>
#include <cmath>

template <typename T>
void printArray(T[], size_t n) {}

template<>
void printArray(int a[], size_t n) {
    for (int i = 0; i < n; i++) {
         std::cout << a[i] << " ";
    }
}

template<>
void printArray(double a[], size_t n) {
    for (int i = 0; i < n; i++) {
        std::cout << std::round(a[i] * 100) / 100 << " ";
    }
}

template<>
void printArray(char a[0], size_t n) {
    for (int i = 0; a[i] != '\0'; i++) {
        std::cout << a[i];
    }
}

int main() {
    int a[] = {1, 2, 3, 1, 2, 3, 6};
    printArray(a, sizeof(a) / sizeof(a[0]));
    std::cout << std::endl;
    double b[] = {1, 2.4, 1.23, 3.14352};
    printArray(b, sizeof(b) / sizeof(b[0]));
    std::cout << std::endl;
    char c[] = "Hello world";
    printArray(c, 0);
    std::cout << std::endl;

    return 0;
}
#include <iostream>

template <typename T>
void reverseArray(T *arr, size_t n) {
    for (int i = 0; i < n / 2; i++) {
        std::swap(arr[i], arr[n - i - 1]);
    }
}

int main() {
    int a[] = {1, 2, 3, 1, 2, 3, 6};
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    reverseArray(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;
    

    double b[] = {1, 2.4, 1.23, 3.14352};
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        std::cout << b[i] << ' ';
    }
    std::cout << std::endl;
    reverseArray(b, sizeof(b) / sizeof(b[0]));
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        std::cout << b[i] << ' ';
    }
    std::cout << std::endl;


    char c[] = "Hello world";
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        std::cout << c[i];
    }
    std::cout << std::endl;
    reverseArray(c, sizeof(c) / sizeof(c[0]));
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        std::cout << c[i];
    }
    std::cout << std::endl;
}
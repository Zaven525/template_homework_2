#include <iostream>

template<typename T>
void sort(T* arr, size_t n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[i]) std::swap(arr[i], arr[j]);
        }
    }
}

int main() {
    int a[] = {1, 4, 3, 2, 5};
    sort(a, sizeof(a) / sizeof(a[0]));
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        std::cout << a[i];
    }
    std::cout << std::endl;

    double b[] = {7.7, 1.2, 1.3};
    sort(b, sizeof(b) / sizeof(b[0]));
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        std::cout << b[i];
    }
    std::cout << std::endl;

    char c[] = "bcdagfe";
    sort(c, sizeof(c) / sizeof(c[0]));
    for (int i = 0; i < sizeof(c) / sizeof(c[0]); i++) {
        std::cout << c[i];
    }
    std::cout << std::endl;

    return 0;
}
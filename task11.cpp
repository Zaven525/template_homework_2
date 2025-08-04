#include<iostream>

template<typename T>
double sumArray(const T* arr, size_t n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return sum;
}
int main() {
    int a[] = {1, 2, 3, 1, 2, 3, 6};
    std::cout << sumArray(a, sizeof(a) / sizeof(a[0])) << std::endl;

    double b[] = {1.2, 1.3, 7.7};
    std::cout << sumArray(b, sizeof(b) / sizeof(b[0])) << std::endl;

    char c[] = "abcdef";
    std::cout << sumArray(c, sizeof(c) / sizeof(c[0])) << std::endl;
    return 0;
}
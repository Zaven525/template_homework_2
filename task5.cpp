#include<iostream>

template<typename T>
int hashValue(const T& a) { return 0; }

template<>
int hashValue(const int& a) {
    int sum = 0, tmp = a;
    while (tmp > 0) {
        sum += tmp % 10;
        tmp /= 10;
    }
    return sum % 10;
}

template<>
int hashValue(const std::string& a) {
    int sum = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        sum += a[i];
    }

    return sum;
}

int main() {
    std::cout << hashValue(12345) << std::endl;
    std::string a{"Hello"};
    std::cout << hashValue(a) << std::endl;
    std::cout << hashValue(5.7) << std::endl;
    return 0;
}
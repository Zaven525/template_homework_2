#include <iostream>

template<typename T>
void swapValues(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int int1 = 1, int2 = 3;
    std::cout << "int 1 = " << int1 << std::endl;
    std::cout << "int 2 = " << int2 << std::endl;
    swapValues(int1, int2);
    std::cout << "int 1 = " << int1 << std::endl;
    std::cout << "int 2 = " << int2 << std::endl;

    double double1 = 1.3, double2 = 3.14;
    std::cout << "double 1 = " << double1 << std::endl;
    std::cout << "double 2 = " << double2 << std::endl;
    swapValues(double1, double2);
    std::cout << "double 1 = " << double1 << std::endl;
    std::cout << "double 2 = " << double2 << std::endl;


    char char1 = 'a', char2 = 'b';
    std::cout << "char 1 = " << char1 << std::endl;
    std::cout << "char 2 = " << char2 << std::endl;
    swapValues(char1, char2);
    std::cout << "char 1 = " << char1 << std::endl;
    std::cout << "char 2 = " << char2 << std::endl;
    

    return 0;
}
#include <iostream>

template <typename T>
void generateMultiplicationTable(T x) {
    for (T i = 1; i <= x; i++) {
        for (T j = 1; j <= x; j++) {
            std::cout << i << " * " << j << " = " << i * j << std::endl;
        }
        std::cout << std::endl;
    }
}
int main() {
    generateMultiplicationTable(10);
    generateMultiplicationTable(10.5);

    return 0;
}
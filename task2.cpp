#include <iostream>
#include <string>
template<typename T>
int compareValues(T a, T b) {
    if (a > b) return 1;
    if (a == b) return 0;
    return -1;
}

template<>
int compareValues<char *>(char* a, char* b) {
    int i = 0, j = 0;
    while (a[i] != '\0') i++;
    while (b[j] != '\0') j++;
    
    return compareValues(i, j);
}

template<>
int compareValues<std::string>(std::string a, std::string b) {
    return a.compare(b);
}
int main() {
    std::cout <<compareValues(3, 5);
    char a[] = "asdf";
    char b[] = "asd";
    std::cout << compareValues(a, b);
    std::cout << compareValues("adf", "adf");
    
}
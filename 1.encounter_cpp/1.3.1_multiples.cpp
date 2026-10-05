#include <iostream>

int main() {
    for (int i = 1; i <= 10000; ++i) {
        if (i % 13 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
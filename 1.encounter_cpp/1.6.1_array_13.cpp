#include <iostream>

int main() {
    int arr[10000];
    int count = 0;
    for (int i = 1; i <= 10000; ++i) {
        if (i % 13 == 0) {
            arr[count] = i;
            count++;
        }
    }
    std::cout << "1~10000中13的倍数有：" << std::endl;
    for (int j = 0; j < count; ++j) {
        std::cout << arr[j] << " ";
    }
    std::cout << std::endl;
    return 0;
}
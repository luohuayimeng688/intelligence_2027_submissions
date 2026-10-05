#include <iostream>
#include <vector>

int main() {
    std::vector<int> v13;
    for (int i = 1; i <= 10000; ++i) {
        if (i % 13 == 0) {
            v13.push_back(i);
        }
    }
    std::cout << "Vector中13的倍数有：" << std::endl;
    for (int j = 0; j < v13.size(); ++j) {
        std::cout << v13[j] << " ";
    }
    std::cout << std::endl;
    return 0;
}
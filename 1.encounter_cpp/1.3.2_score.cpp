#include <cstdlib>
#include <iostream>

int main() {
    int score;
    std::cin >> score;

    switch (score >= 60) {
        case 1:
            std::cout << "合格" << std::endl;
            break;
        case 0:
            std::cout << "不合格" << std::endl;
            break;
    }

    return 0;
}
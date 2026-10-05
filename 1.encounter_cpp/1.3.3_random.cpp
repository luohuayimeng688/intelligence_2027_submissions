#include <iostream>
#include <random>

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 30);

    std::cout << distrib(gen) << std::endl;
    return 0;
}
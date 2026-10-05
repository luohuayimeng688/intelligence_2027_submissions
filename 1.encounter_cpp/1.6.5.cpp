#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> odds, evens, primes;
    for (int i = 1; i <= 100; ++i) {
        if (i % 2 != 0) odds.push_back(i);
        else evens.push_back(i);
        if (isPrime(i)) primes.push_back(i);
    }
    
    std::cout << "同时是单数和质数的数值: ";
    for (int num : odds) {
        if (isPrime(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
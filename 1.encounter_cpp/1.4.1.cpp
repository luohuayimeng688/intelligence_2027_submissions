#include <iostream>
#include <random>

int addByValue(int a, int b) {
    return a + b;
}

void addByReference(int &total_A, int today_exp) {
    total_A = total_A + today_exp;
}

int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 1);

    int A = 0;
    int day = 1;
    int E_prev2 = 1;
    int E_prev1 = 1;
    int E_n = 0;
    int last_E1 = 1;

    while (A < 100) {
        int state = distrib(gen);
        switch (state) {
            case 1: {
                E_n = addByValue(E_prev1, E_prev2);
                addByReference(A, E_n);
                last_E1 = E_n;
                E_prev2 = E_prev1;
                E_prev1 = E_n;
                break;
            }
            case 0: {
                int L_n = last_E1 / 2;
                if (A < L_n) L_n = A;
                addByReference(A, -L_n);
                break;
            }
        }
        day++;
    }

    std::cout << "YOU ARE WELCOME TO JOIN PIONEER!" << std::endl;
    return 0;
}
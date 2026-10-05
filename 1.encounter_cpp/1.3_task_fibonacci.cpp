#include <iostream>
#include <random>

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
                E_n = E_prev1 + E_prev2;
                A += E_n;
                last_E1 = E_n;

                std::cout << "第 " << day << " 天 [状态1] 获得经验: " << E_n 
                          << " | 当前总经验: " << A << std::endl;

                E_prev2 = E_prev1;
                E_prev1 = E_n;
                break;
            }

            case 0: {
                int L_n = last_E1 / 2;

                if (A < L_n) {
                    L_n = A;
                }

                A -= L_n;

                std::cout << "第 " << day << " 天 [状态0] 扣除经验: " << L_n 
                          << " | 当前总经验: " << A << std::endl;
                break;
            }
            
            default:
                break;
        }
        
        day++;
    }

    std::cout << "YOU ARE WELCOME TO JOIN PIONEER!" << std::endl;

    return 0;
}
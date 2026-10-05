#include <iostream>
#include <random>
#include <string>

class Ball {
protected:
    int size;
    int price;

public:
    Ball(int s, int p) : size(s), price(p) {}

    virtual void printInfo() {
        std::cout << "尺寸: " << size << "mm, 价格: " << price << "元";
    }
};

class Projectile : public Ball {
private:
    std::string type;

public:
    Projectile(int s, int p, std::string t) : Ball(s, p), type(t) {}

    void printInfo() override {
        Ball::printInfo();
        std::cout << " | 型号: " << type << std::endl;
    }
};

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
                E_prev2 = E_prev1;
                E_prev1 = E_n;
                break;
            }
            case 0: {
                int L_n = last_E1 / 2;
                if (A < L_n) L_n = A;
                A -= L_n;
                break;
            }
        }
        day++;
    }

    std::cout << "经验达到 " << A << "，触发随机奖励！" << std::endl;

    int rewardRand = distrib(gen);
    if (rewardRand == 0) {
        Projectile bigBall(42, 100, "42mm大弹丸");
        bigBall.printInfo();
    } else {
        Projectile smallBall(17, 50, "17mm小弹丸");
        smallBall.printInfo();
    }

    std::cout << "YOU ARE WELCOME TO JOIN PIONEER!" << std::endl;
    return 0;
}
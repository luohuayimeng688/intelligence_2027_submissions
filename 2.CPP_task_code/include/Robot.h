#ifndef ROBOT_H
#define ROBOT_H

#include <string>
#include <iostream>
#include <cstdlib>

class Robot {
public:
    std::string Name_;
    int Health_;
    int Attack_;
    double Hit_rate_;

    Robot(std::string name, int health, int attack, double hit_rate);
    bool Survive();
    void Hit(class Building& target);
    void Hit(Robot& target);
};

class Building {
public:
    std::string Name_;
    int Health_;
    bool Invincible;
    bool Protected;

    Building(std::string name, int health);
    bool Survive();
    void TakeDamage(int damage);
};

#endif
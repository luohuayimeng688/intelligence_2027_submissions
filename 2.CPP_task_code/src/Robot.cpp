#include "../include/Robot.h"

Robot::Robot(std::string name, int health, int attack, double hit_rate)
    : Name_(name), Health_(health), Attack_(attack), Hit_rate_(hit_rate) {}

bool Robot::Survive() {
    return Health_ > 0;
}

void Robot::Hit(Building& target) {
    double random_hit = (double)rand() / RAND_MAX;
    if (random_hit > Hit_rate_) {
        return;
    }
    if (target.Invincible || target.Protected) {
        return;
    }
    target.TakeDamage(Attack_);
}

void Robot::Hit(Robot& target) {
    double random_hit = (double)rand() / RAND_MAX;
    if (random_hit > Hit_rate_) {
        return;
    }
    target.Health_ -= Attack_;
}

Building::Building(std::string name, int health)
    : Name_(name), Health_(health), Invincible(false), Protected(false) {}

bool Building::Survive() {
    return Health_ > 0;
}

void Building::TakeDamage(int damage) {
    Health_ -= damage;
    if (Health_ < 0) {
        Health_ = 0;
    }
}
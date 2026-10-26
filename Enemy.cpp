#include "Enemy.h"
#include <algorithm>

Enemy::Enemy(int maxHealth) : health_(maxHealth) {}
int Enemy::getHealth() const { return health_; }
bool Enemy::isAlive() const { return health_ > 0; }

void Enemy::takeDamage(int amount) {
    if (amount > 0) {
        health_ = std::max(0, health_ - amount);
    }
}

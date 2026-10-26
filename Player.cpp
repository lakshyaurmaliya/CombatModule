#include "Player.h"
#include <algorithm>

Player::Player(int maxHealth)
    : health_(maxHealth), maxHealth_(maxHealth) {}

int Player::getHealth() const { return health_; }
int Player::getMaxHealth() const { return maxHealth_; }
bool Player::isAlive() const { return health_ > 0; }

void Player::takeDamage(int amount) {
    if (amount > 0) {
        health_ = std::max(0, health_ - amount);
    }
}

int Player::heal(int amount) {
    if (amount <= 0 || !isAlive()) return 0;
    const int oldHealth = health_;
    health_ = std::min(maxHealth_, health_ + amount);
    return health_ - oldHealth;
}

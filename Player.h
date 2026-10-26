#pragma once
#include <string>

class Player {
public:
    explicit Player(int maxHealth = 100);

    int getHealth() const;
    int getMaxHealth() const;
    bool isAlive() const;
    void takeDamage(int amount);
    int heal(int amount);

private:
    int health_;
    int maxHealth_;
};

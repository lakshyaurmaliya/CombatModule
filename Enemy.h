#pragma once

class Enemy {
public:
    explicit Enemy(int maxHealth = 100);

    int getHealth() const;
    bool isAlive() const;
    void takeDamage(int amount);

private:
    int health_;
};

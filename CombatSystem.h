#pragma once
#include <random>

class Player;
class Enemy;

class CombatSystem {
public:
    CombatSystem();
    int generateDamage();
    void playerAttack(Player& player, Enemy& enemy);
    void enemyAttack(Enemy& enemy, Player& player);

private:
    std::mt19937 rng_;
    std::uniform_int_distribution<int> damage_;
};

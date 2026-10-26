#include "CombatSystem.h"
#include "Player.h"
#include "Enemy.h"
#include <random>

CombatSystem::CombatSystem()
    : rng_(std::random_device{}()), damage_(10, 25) {}

int CombatSystem::generateDamage() {
    return damage_(rng_);
}

void CombatSystem::playerAttack(Player&, Enemy& enemy) {
    enemy.takeDamage(generateDamage());
}

void CombatSystem::enemyAttack(Enemy&, Player& player) {
    player.takeDamage(generateDamage());
}

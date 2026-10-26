#include <iostream>
#include <limits>
#include "Player.h"
#include "Enemy.h"
#include "CombatSystem.h"

int main() {
    Player player(100);
    Enemy enemy(100);
    CombatSystem combat;

    std::cout << "=== C++ COMBAT SIMULATOR ===\n";
    while (player.isAlive() && enemy.isAlive()) {
        std::cout << "\nPlayer HP: " << player.getHealth()
                  << " | Enemy HP: " << enemy.getHealth() << "\n"
                  << "1. Attack\n2. Heal (+20, max 100)\n3. Quit\n"
                  << "Choose an action: ";

        int choice{};
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Enter 1, 2, or 3.\n";
            continue;
        }

        if (choice == 1) {
            const int before = enemy.getHealth();
            combat.playerAttack(player, enemy);
            std::cout << "You dealt " << before - enemy.getHealth()
                      << " damage.\n";
        } else if (choice == 2) {
            const int restored = player.heal(20);
            std::cout << "Recovered " << restored << " health.\n";
        } else if (choice == 3) {
            std::cout << "You left the battle.\n";
            return 0;
        } else {
            std::cout << "Invalid choice. Try again.\n";
            continue;
        }

        if (enemy.isAlive()) {
            const int before = player.getHealth();
            combat.enemyAttack(enemy, player);
            std::cout << "Enemy dealt " << before - player.getHealth()
                      << " damage.\n";
        }
    }

    if (player.isAlive()) {
        std::cout << "\nVICTORY! You defeated the enemy!\n";
    } else {
        std::cout << "\nGAME OVER! You were defeated.\n";
    }
    return 0;
}

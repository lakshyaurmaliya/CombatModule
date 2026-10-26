# C++ Combat Simulator

## Overview
A small console-based game module demonstrating player/enemy health, randomized combat damage, healing, menu input, and win/loss conditions.

## Requirements
- C++17-compatible compiler (Visual Studio Community is suitable)
- The source files in the `src` folder

## Build and run in Visual Studio
1. Create a C++ Console App project.
2. Add all `.cpp` and `.h` files from `src` to the project.
3. Ensure the project uses C++17 or later.
4. Build with **Build > Build Solution**.
5. Run with **Ctrl+F5**.

Alternatively, from a terminal with a C++ compiler installed:
```bash
g++ -std=c++17 src/main.cpp src/Player.cpp src/Enemy.cpp src/CombatSystem.cpp -o CombatModule
./CombatModule
```
On Windows, run `CombatModule.exe` after compilation.

## Controls
- `1`: Attack
- `2`: Heal up to 20 health, with a maximum of 100
- `3`: Quit

## Code structure
- `Player.h/.cpp`: player health, damage, healing, and alive-state checks.
- `Enemy.h/.cpp`: enemy health and damage handling.
- `CombatSystem.h/.cpp`: randomized damage and attack interactions.
- `main.cpp`: menu, game loop, input validation, and end conditions.
- `tests/test_plan.md`: manual test cases.

## Notes
Damage is randomly generated between 10 and 25 points. The enemy attacks after a valid player action if it is still alive. This is a learning project and can be extended with cooldowns, movement, or Unreal Engine integration.

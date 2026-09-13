// ConsoleGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "PlayerStats.h"

void printPlayerStats(const std::string playerName, const float currentHealth,
    const float currentEnergy, const bool isPlayerAlive);
void printSeparator();

float calculateDamage(const float baseDamage, const float armor);

int main()
{   
    PlayerStats player{ "Player 1", 100.0F, 50.0F };
   
    printPlayerStats(player.getName(), player.getCurrentHealth(), player.getCurrentEnergy(), player.isAlive());

    return 0;
}

void printPlayerStats(const std::string playerName, const float currentHealth, const float currentEnergy, 
    const bool isPlayerAlive)
{
    printSeparator();
    std::cout << "Player Name is " << playerName << "\n";
    std::cout << "Health: " << currentHealth << "\n";
    std::cout << "Energy: " << currentEnergy << "\n";
    std::cout << "Alive: " << std::boolalpha << isPlayerAlive << "\n\n\n";
    printSeparator();
}

void printSeparator()
{
    std::cout << "------------------------------\n\n\n";
}

float calculateDamage(const float baseDamage, const float armor)
{
    const float finalDamage{ baseDamage - armor * 0.2F };
    return finalDamage > 0.0F ? finalDamage : 0.0F;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

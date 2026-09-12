#include "PlayerStats.h"
#include <iostream>

PlayerStats::PlayerStats(
    std::string name,
    const float maxHealth,
    const float maxEnergy)
    : name{ std::move(name) }
    , maxHealth{ maxHealth }
    , currentHealth{ maxHealth }
    , maxEnergy{ maxEnergy }
    , currentEnergy{ maxEnergy }
{
}

void PlayerStats::applyDamage(float damage)
{
    if (isAlive())
    {
        currentHealth = currentHealth - damage;
    }
}

bool PlayerStats::tryUseDash(float energyCost)
{
    if (isAlive() && (getCurrentEnergy() > energyCost))
    {
        currentEnergy -= energyCost;
        std::cout << "Player use dash";
    }
}

float PlayerStats::getCurrentHealth()
{
    return currentHealth;
}

float PlayerStats::getMaxHealth() const
{
    return maxHealth;
}

float PlayerStats::getCurrentEnergy()
{
    return currentEnergy;
}

float PlayerStats::getMaxEnergy() const
{
    return maxEnergy;
}

bool PlayerStats::isAlive() const
{
    return currentHealth > 0;
}




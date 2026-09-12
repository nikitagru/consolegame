#pragma once

#include <string>

class PlayerStats
{
public:
    PlayerStats(std::string name, float maxHealth, float maxEnergy);

    void applyDamage(float damage);
    bool tryUseDash(float energyCost);

    float getCurrentHealth();
    float getMaxHealth() const;
    float getCurrentEnergy();
    float getMaxEnergy() const;
    bool isAlive() const;

private:
    std::string name;
    float maxHealth;
    float currentHealth;
    float maxEnergy;
    float currentEnergy;
};
#pragma once
#include <string>
#include "WeaponType.cpp"
#include "DamageType.cpp"

class Weapon {
public:
    Weapon(std::string displayName, float baseDamage, float fireCooldown, 
        DamageType damageType, WeaponType weaponType);

    std::string getBaseDamage();

private:
    std::string displayName;
    float baseDamage;
    float fireCooldown;
    DamageType damageType;
    WeaponType weaponType;
};
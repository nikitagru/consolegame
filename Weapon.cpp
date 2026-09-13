#include <string>
#include "DamageType.cpp"
#include "WeaponType.cpp"
#include "Weapon.h"

Weapon::Weapon(std::string displayName, float baseDamage, float fireCooldown,
    DamageType damageType, WeaponType weaponType)
    : displayName{ std::move(displayName) },
    baseDamage{ baseDamage },
    fireCooldown{ fireCooldown }, 
    damageType{ damageType },
    weaponType{ weaponType } {
    
}

std::string Weapon::getBaseDamage()
{
    return displayName;
}

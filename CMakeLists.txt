cmake_minimum_required(VERSION 3.24)

project(rift_runner_combat_simulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(rift_runner
    ConsoleGame.cpp
    PlayerStats.cpp
    Weapon.cpp
    WeaponType.cpp
    DamageType.cpp
)
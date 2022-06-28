#include <string>
#include "Character.h"

Character::Character(std::string new_name) {
    Universal::set_name(new_name);
    strength = 3;
    intelligence = 4;
}

void Character::set_strength(int new_strength) {
    strength = new_strength;
}

int Character::get_strength() {
    return strength;
}

void Character::set_dexterity(int new_dexterity) {
    dexterity = new_dexterity;
}

int Character::get_dexterity() {
    return dexterity;
}

void Character::set_intelligence(int new_intelligence) {
    intelligence = new_intelligence;
}

int Character::get_intelligence() {
    return intelligence;
}

void Character::set_wisdom(int new_wisdom) {
    wisdom = new_wisdom;
}

int Character::get_wisdom() {
    return wisdom;
}

void Character::set_charisma(int new_charisma) {
    charisma = new_charisma;
}

int Character::get_charisma() {
    return charisma;
}
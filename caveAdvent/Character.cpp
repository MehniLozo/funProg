#include "Character.h"

Character::Character(std::string name) : _name(name)
{
}
const std::string Character::getName() const
{
    return _name;
}

void Character::setName(const std::string name)
{
    _name = name;
}

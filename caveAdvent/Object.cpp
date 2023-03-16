#include "Object.h"

Object::Object(std::string name, long weight) : _name(name), _weight(weight)
{
}
Object::~Object()
{
}
const std::string Object::getName() const
{
    return _name;
}

void Object::setName(const std::string name)
{
    _name = name;
}

long Object::getWeight() const
{
    return _weight;
}

void Object::setWeight(long weight)
{
    _weight = weight;
}

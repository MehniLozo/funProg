#include "Location.h"
#include <iostream>

Location::Location(std::string description, int number) : _description(description), _number(number)
{
    for (unsigned i = 0; i < numberOfObjects; i++)
        _objects[i] = nullptr;
}
Location::~Location()
{
    _north = nullptr;
    _east = nullptr;
    _south = nullptr;
    _west = nullptr;
}
const std::string Location::getDescription() const
{
    return _description;
}

void Location::setDescription(const std::string description)
{
    _description = description;
}

int Location::getNumber() const
{
    return _number;
}

void Location::setNumber(int num)
{
    _number = num;
}
Location *Location::north()
{
    return _north;
}
Location *Location::setNorth(Location *location)
{
    _north = location;
    return this;
}
Location *Location::east()
{
    return _east;
}
Location *Location::setEast(Location *location)
{
    _east = location;
    return this;
}
Location *Location::south()
{
    return _south;
}
Location *Location::setSouth(Location *location)
{
    _south = location;
    return this;
}
Location *Location::west()
{
    return _west;
}
Location *Location::setWest(Location *location)
{
    _west = location;
    return this;
}
Location *Location::addObject(Object *object)
{
    if (currObj < numberOfObjects)
    {
        _objects[currObj] = object;
        currObj += 1;
        return this;
    }
    throw std::runtime_error(std::string("You cant add more than " + numberOfObjects));
}
void Location::displayObjects()
{
     for(unsigned i = 0;i<currObj;i++)
     {
            std::cout << _objects[i]->getName() + " ";
     }
     std::cout << "\n";

}
std::string Location::availableMoves(){
    std::string movements = "";
    if (_north)
        movements =movements +  " North ";
    if (_east)
        movements = movements + " East ";

    if (_south)
        movements= movements +  " South ";
    if (_west)
        movements = movements + " West ";
    movements = movements + ".";
    return movements;
}
std::string Location::description()
{
    const std::string retString = "\nYou are in " + _description + " .Movements available:\t" + availableMoves()
    +"." + " You can see \n";
    displayObjects();
    return retString;
}
Location* Location::setCharacter(Character* c)
{
    _c= c;
    return this;
}
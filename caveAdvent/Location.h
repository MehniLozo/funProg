#ifndef ADVENTURE_PROJECT_LOCATION
#define ADVENTURE_PROJECT_LOCATION
#include <string>
#include "Object.h"
#include "Character.h"

const int numberOfObjects = 4;
class Location
{
private:
    std::string _description = "";
    int _number = 0;
    // Order should go : North , East, South, West
    Location *_north = nullptr;
    Location *_east = nullptr;
    Location *_south = nullptr;
    Location *_west = nullptr;
    int currObj = 0;
    Object *_objects[numberOfObjects];
    Character *_c = nullptr;

public:
    Location() = default;
    Location(std::string description, int number);
    virtual~Location();
    const std::string getDescription() const;
    void setDescription(const std::string description);
    int getNumber() const;
    void setNumber(int num);
    Location* north();
    Location* setNorth(Location* location);
    Location* east();
    Location* setEast(Location* location);
    Location* south();
    Location* setSouth(Location* location);
    Location* west();
    Location* setWest(Location* location);
    std::string description();
    Location* addObject(Object* object);
    void displayObjects();
    std::string availableMoves();
    Location* setCharacter(Character* c);

    

};

#endif
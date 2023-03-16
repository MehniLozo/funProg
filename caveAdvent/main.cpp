#include <iostream>

#include "Location.cpp"
#include "Object.cpp"
#include "Character.cpp"

int main()
{
    Location l1 = Location("a Casa", 1);
    Location l2 = Location("UJA", 2);
    Location l3 = Location("a Supermercado", 3);
    Location l4 = Location("a Station", 4);

    Object o1 = Object("Supply", 2);
    Object o2 = Object("Computer", 4);

    l1.setNorth(&l2)->setEast(&l3)->setSouth(&l4)->addObject(&o1);
    l1.addObject(&o2);
    l1.displayObjects();
    try
    {
        l2.addObject(&o2);
        l2.displayObjects();
    }
    catch (std::runtime_error &e)
    {
        std::cout << e.what();
    }

    std::cout << l1.description();
    return 0;
}
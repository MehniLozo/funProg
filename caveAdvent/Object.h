#ifndef ADVENTURE_PROJECT_OBJECT
#define ADVENTURE_PROJECT_OBJECT
#include <string>

class Object
{
private:
    std::string _name = "";
    long _weight = 0;

public:
    Object() = default;
    Object(std::string name, long weight);
    virtual~Object() ;
    const std::string getName() const;
    void setName(const std::string name);
    long getWeight() const;
    void setWeight(long weight);
};

#endif
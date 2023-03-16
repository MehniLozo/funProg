#ifndef ADVENTURE_PROJECT_CHARACTER
#define ADVENTURE_PROJECT_CHARACTER
#include <string>

class Character
{
private:
    std::string _name = "";
public:
    Character() = default;
    Character(std::string name);
    ~Character() = default;
    const std::string getName() const;
    void setName(const std::string name);
};

#endif
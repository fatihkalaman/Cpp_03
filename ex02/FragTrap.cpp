#include "FragTrap.hpp"

FragTrap::FragTrap() {
    cout << "FragTrap Constructor called" << endl;
}

FragTrap::FragTrap(std::string name)
{
    this->Name = name;
    cout << "\033[2;33mFragTrap " << DEF << BR_YELLOW << " Hey " << BR_WHITE << this->Name << "!" << BR_YELLOW << " I set your hit point to 100" << DEF << endl;
    this->setAll(name, 100, 100, 30);
}

FragTrap::FragTrap(const FragTrap& cpy)
{
    *this = cpy;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    this->setAll(obj.Name, obj.f_hit_point, obj.f_energy_point, obj.f_attack_dmg);
    return (*this);
}

void FragTrap::highFivesGuys()
{
    cout << BR_WHITE << this->Name << BR_CYAN << "FragTrap Give me high five man!." << DEF "\n" << endl;
}

FragTrap::~FragTrap()
{
    cout << "\033[2;33mFragTrap Destructor called" << endl;
}
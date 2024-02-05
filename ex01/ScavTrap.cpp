#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    cout << "Constructor called" << endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->s_Name = name;
    cout << BR_YELLOW << "Hey " << BR_WHITE << this->s_Name << "!" << BR_YELLOW << " I set your hit and energy point to 10" << DEF << endl;
    this->setAll(name, 100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
    *this = cpy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    this->setAll(obj.s_Name, obj.s_hit_point, obj.s_energy_point, obj.s_attack_dmg);
    return (*this);
}

void ScavTrap::guardGate()
{
    cout << BR_WHITE << this->s_Name << BR_CYAN << "ScavTrap is now in Gatekeeper mode." << DEF << "\n" << endl;
}

ScavTrap::~ScavTrap()
{
    cout << "\033[2;33mDestructor called" << endl;
}
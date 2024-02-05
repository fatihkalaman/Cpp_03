#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    cout << "ScavTrap Constructor called" << endl;
}

ScavTrap::ScavTrap(std::string name)
{
    this->Name = name;
    cout << "\033[2;33mScavTrapDEFBR_YELLOW Hey BR_WHITE" << this->Name << "!BR_YELLOW I set your hit point to 100DEF" << endl;
    this->setAll(name, 100, 50, 20);
}

ScavTrap::ScavTrap(const ScavTrap& cpy)
{
    *this = cpy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    this->setAll(obj.Name, obj.s_hit_point, obj.s_energy_point, obj.s_attack_dmg);
    return (*this);
}

void ScavTrap::guardGate()
{
    cout << "BR_WHITE" << this->Name << " BR_CYANScavTrap is now in Gatekeeper mode.DEF\n" << endl;
}

ScavTrap::~ScavTrap()
{
    cout << "\033[2;33mScavTrap Destructor called" << endl;
}
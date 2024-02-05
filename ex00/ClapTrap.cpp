#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    cout << "Constructor Called" << endl;
}

ClapTrap::ClapTrap(std::string Name) : Hit_point(10), Energy_point(10), Attack_dmg(0) 
{
    this->Name = Name;
    //cout << "Welcome the darkest realms my boy" << endl;
    cout << BR_YELLOW << "Hey " << BR_WHITE << this->Name << "!" << BR_YELLOW << "I set your hit and energy point to 10" << DEF << endl;
}

ClapTrap::ClapTrap(const ClapTrap& cpy)
{
    *this = cpy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->Hit_point = obj.Hit_point;
    this->Attack_dmg = obj.Attack_dmg;
    this->Energy_point = obj.Energy_point;
    return (*this);
}

void ClapTrap::setAll(std::string name, int health, int energy, int dmg)
{
    this->Name = name;
    this->Hit_point = health;
    this->Attack_dmg = energy;
    this->Energy_point = dmg;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
        cout << "\n\033[2;35mClapTrap " << DEF << BR_WHITE  << Name << RED << " attacks " << BR_WHITE  << target << YELLOW << ", causing " << BR_WHITE << Attack_dmg << YELLOW << " points of damage!\n" << endl;
    else if (this->Energy_point <= 0 && this->Hit_point > 0)
        cout << Name << " can't attack! ** Out of mana **" << endl;
    else if (this->Hit_point <= 0)
        cout << BR_WHITE << Name << BR_RED << " can't attack! \033[2;31m** Character is not alive! **" << DEF << endl;

    this->Energy_point -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    cout << BR_WHITE << this->Name << BR_RED << " take " << BR_WHITE << "-" << amount << BR_RED << " damage\n" << DEF << endl;
    this->Hit_point -= (int)amount;
    cout << BR_WHITE << this->Name << "'s " << BR_GREEN << "health: " << BR_WHITE << this->Hit_point << DEF << endl; 
    if (this->Hit_point <= 0)
        cout << "\n" << BG_RED << this->Name << " is not alive anymore :(" << DEF << "\n" << endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy_point > 0 && this->Hit_point > 0)
        cout << "\n\033[2;32m" << this->Name << " healed +" << amount << DEF << "\n" << endl;
    else if (this->Energy_point <= 0 && this->Hit_point > 0)
        cout << BR_RED << Name << " can't heal!\033[2;31m ** Out of mana **" << DEF << endl;
    else if (this->Hit_point <= 0)
        cout << BR_RED << Name << " can't heal!\033[2;31m ** Character is not alive! **" << DEF << endl;
    this->Hit_point += (int)amount;
    this->Energy_point -= 1;
}

ClapTrap::~ClapTrap()
{
    cout << "\033[2;33mDestructor Called" << DEF << endl;
}
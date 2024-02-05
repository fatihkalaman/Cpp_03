#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap yuno("Yuno");
    ClapTrap asta("Asta");
    
    yuno.beRepaired(5);
    asta.takeDamage(10);
    yuno.takeDamage(10);


    yuno.attack("Asta");
    yuno.guardGate();

    asta.beRepaired(5);
}
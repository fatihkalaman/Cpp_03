#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("test1");
    FragTrap b("test2");
    
    b.attack("FIRE!");
    b.takeDamage(10);
    b.beRepaired(10);

    b.highFivesGuys();
    a.highFivesGuys();
}
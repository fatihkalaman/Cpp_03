#include "ClapTrap.hpp"

int main()
{
    ClapTrap yuno("Yuno");
    ClapTrap asta("Asta");
    
    yuno.beRepaired(5);
    asta.takeDamage(10);
    yuno.takeDamage(10);


    yuno.attack("Asta");
    for (size_t i = 0; i <= 10; i++)
    {
        asta.attack("Yuno");
    }
    
}
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define cout std::cout
# define endl std::endl

class ScavTrap : public ClapTrap
{
    private:
        std::string s_Name;
        int s_hit_point;
        int s_energy_point;
        int s_attack_dmg;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap& name);
        ScavTrap& operator=(const ScavTrap& obj);
        void guardGate();
};

#endif
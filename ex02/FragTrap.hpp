#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"

# define cout std::cout
# define endl std::endl

class FragTrap : public ClapTrap
{
    private:
        std::string Name;
        int f_hit_point;
        int f_energy_point;
        int f_attack_dmg;
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(const FragTrap& name);
        FragTrap& operator=(const FragTrap& obj);
        void highFivesGuys(void);
};

#endif
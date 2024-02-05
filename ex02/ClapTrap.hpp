#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define cout std::cout
# define endl std::endl

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BR_RED "\033[1;31m"
# define BR_GREEN "\033[1;32m"
# define BR_YELLOW "\033[1;33m"
# define BR_BLUE "\033[1;34m"
# define BR_MAGENTA "\033[1;35m"
# define BR_CYAN "\033[1;36m"
# define BR_WHITE "\033[1;37m"

# define BG_RED "\033[0;41m"
# define BG_GREEN "\033[0;42m"
# define BG_YELLOW "\033[0;43m"
# define BG_BLUE "\033[0;44m"
# define BG_MAGENTA "\033[0;45m"
# define BG_CYAN "\033[0;46m"
# define BG_WHITE "\033[0;47m"

# define DEF "\033[0m"

class ClapTrap
{
    private:
        std::string Name;
        int Hit_point;
        int Energy_point;
        int Attack_dmg;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& cpy);
        ClapTrap& operator=(const ClapTrap& obj);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setAll(std::string name, int health, int energy, int dmg);
};

#endif
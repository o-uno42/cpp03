#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

    bool _guardGateMode;

    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &scavTrap);
        ScavTrap &operator=(const ScavTrap &scavTrap);
        ~ScavTrap();
        void attack(std::string const & target);
        void guardGate();
        std::string getName();
};

#endif
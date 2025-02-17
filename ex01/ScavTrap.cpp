#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "--- ScavTrap Constructor called for " << name << std::endl;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy) {
	std::cout << "--- ScavTrap Copy Constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "--- ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src) {
	std::cout << "--- ScavTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_hitpoints = src._hitpoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ScavTrap::attack(std::string const & target) {
    if (_hitpoints < 1 || _energyPoints < 1)
    {
        std::cout << "ScavTrap " << _name << " is not able to attack!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate(void) {
	if (_hitpoints < 1 || _energyPoints < 1)
	{
		std::cout << "ScavTrap " << _name << " is not able to enter in Gate keeper mode!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
	return ;
}
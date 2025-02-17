#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name){
    std::cout << "--- ClapTrap default constructor called" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap){
    std::cout << "--- ClapTrap copy constructor called" << std::endl;
    *this = clapTrap;
}

ClapTrap::~ClapTrap(){
    std::cout << "--- ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap){
    std::cout << "--- ClapTrap assignation operator called" << std::endl;
    _name = clapTrap._name;
    _hitPoints = clapTrap._hitPoints;
    _energyPoints = clapTrap._energyPoints;
    _attackDamage = clapTrap._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const & target){
    if (_hitPoints <= 0 || _energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has 0 hitpoints and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot take damage, it's already dead..." << std::endl;
        return ;
    }
    if (amount >= _hitPoints) {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << "took too much damage and now has reached 0 hitpoints!" << std::endl;
        return ;
    } else {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitPoints >= 10) {
        std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
        return ;
    }
    if (_energyPoints <= 0) {
        _energyPoints = 0;
        std::cout << "ClapTrap " << _name << " has reached 0 energy points and cannot be repaired!" << std::endl;
        return ;
    } else {
        _hitPoints += amount;
        _energyPoints -= amount;
        std::cout << "ClapTrap " << _name << " is being repaired for " << amount << " points" << std::endl;
    }
}


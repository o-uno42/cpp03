#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "--- FragTrap default constructor called" << std::endl;
    _name = name;
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap) {
    std::cout << "--- FragTrap copy constructor called" << std::endl;
    *this = fragTrap;
}

FragTrap::~FragTrap(){
    std::cout << "--- FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap){
    std::cout << "--- FragTrap assignation operator called" << std::endl;
    _name = fragTrap._name;
    _hitpoints = fragTrap._hitpoints;
    _energyPoints = fragTrap._energyPoints;
    _attackDamage = fragTrap._attackDamage;
    return *this;
}

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << _name << " says: \"High five, guys!\"" << std::endl;
}
#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name){
    std::cout << "--- ClapTrap default constructor called" << std::endl;
    _name = name;
    _hitpoints = 10;
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
    _hitpoints = clapTrap._hitpoints;
    _energyPoints = clapTrap._energyPoints;
    _attackDamage = clapTrap._attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const & target){
    if (_hitpoints <= 0 || _energyPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has 0 hitpoints and cannot attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitpoints <= 0) {
        std::cout << "ClapTrap " << _name << " cannot take damage, it's already dead..." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
    if (amount >= _hitpoints) {
        _hitpoints = 0;
        std::cout << "ClapTrap " << _name << " has reached 0 hitpoints!" << std::endl;
        return ;
    } else {
        _hitpoints -= amount;
        std::cout << "ClapTrap " << _name << " has " << _hitpoints << " hitpoints left!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_hitpoints >= 10) {
        std::cout << "ClapTrap " << _name << " is already at full health!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " is being repaired for " << amount << " points!" << std::endl;
    _hitpoints += amount;
    if (_energyPoints <= 0) {
        _energyPoints = 0;
        std::cout << "ClapTrap " << _name << " has reached 0 energy points and cannot be repaired!" << std::endl;
        return ;
    } else {
        _energyPoints -= amount;
        std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left!" << std::endl;
    }
}

std::string ClapTrap::getName(){
    return _name;
}

unsigned int ClapTrap::getHitpoints(){
    return _hitpoints;
}

unsigned int ClapTrap::getEnergyPoints(){
    return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage(){
    return _attackDamage;
}

void ClapTrap::setName(std::string name){
    _name = name;
}

void ClapTrap::setHitpoints(unsigned int hitpoints){
    _hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints){
    _energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage){
    _attackDamage = attackDamage;
}


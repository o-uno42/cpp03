#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap scavTrap("MyScavTrap");

    scavTrap.attack("target");
    scavTrap.takeDamage(5);
    scavTrap.guardGate();

    scavTrap.attack("target");
    scavTrap.takeDamage(125);
    scavTrap.guardGate();
    
    return 0;
}
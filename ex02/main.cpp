#include "FragTrap.hpp"

int main (void ){
    FragTrap fragTrap("MyFragTrap");

    fragTrap.highFivesGuys();
    fragTrap.attack("target");
    fragTrap.takeDamage(10);
    fragTrap.beRepaired(5);

    return 0;
}
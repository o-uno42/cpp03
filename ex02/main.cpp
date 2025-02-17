#include "FragTrap.hpp"

int main (void ){
    FragTrap fragTrap("FragTrap");
    FragTrap fragTrap2(fragTrap);
    FragTrap fragTrap3 = fragTrap;

    fragTrap.highFivesGuys();
    fragTrap2.highFivesGuys();
    fragTrap3.highFivesGuys();

    return 0;
}
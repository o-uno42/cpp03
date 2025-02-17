#include "ClapTrap.hpp"

int main( void ){
    ClapTrap clapTrap("MyClapTrap");
    ClapTrap clapTrap2(clapTrap);
    ClapTrap clapTrap3 = clapTrap;

    std::cout << std::endl;
    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);
    
    std::cout << std::endl;
    clapTrap.takeDamage(125);
    clapTrap.attack("target");
    clapTrap.takeDamage(5);

    std::cout << std::endl;
    clapTrap.beRepaired(5);
    clapTrap.beRepaired(5);
    clapTrap.attack("target");
    std::cout << std::endl;
    
    return 0;
}
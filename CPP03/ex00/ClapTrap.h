#include <iostream>


class ClapTrap {
	private:
		std::string name;
		unsigned int	_hp;
		unsigned int	_energy_points;
		unsigned int	_attack_dmg;

	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};


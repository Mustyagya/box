#include "red_boxer.h"

red_boxer::red_boxer()

{
	int HP1(100);

}
void red_boxer::SpecialAttack()const
{

	std::cout << "Red boxer attack" << (n_damage - HP);
	std::cout << "damag points!\n";
	if (HP1 == 0)
	{
		std::cout << "Red boxer loss" << std::endl;
	}
	if (HP1 != 0)
	{
		std::cout << "Red in the blue corner won";
	}

}

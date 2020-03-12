#include "parameter.h"
#include <cstdlib>
parameter::parameter()
{
	
	int n_damage = 10 + rand() % 60;
	
}
void parameter::Attack() const
{
	std::cout << "Random" << n_damage << std::endl;

}
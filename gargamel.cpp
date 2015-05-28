#include "gargamel.h"

GARGAMEL::GARGAMEL(int in_limitX, int in_limitY, int in_range)
{
	limitX = in_limitX;
	limitY = in_limitY;
	range = in_range;
	caught = 0;
	alive = true;
	init();
}

void GARGAMEL::check(SMERF& smerf)
{
	// jezeli smerf nie zyje
	if (!smerf.alive)
		return;
	
	// sprawdzanie
	if ((corX - smerf.corX)*(corX - smerf.corX)+(corY - smerf.corY)*(corY - smerf.corY) <= range*range)
	{
		smerf.alive = false;
		caught++;
	}
	return;
}

void GARGAMEL::ret_caught()
{
	return caught;
}
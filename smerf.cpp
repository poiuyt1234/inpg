#include "smerf.h"

SMERF::SMERF(int in_limitX, int in_limitY)
{
	limitX = in_limitX;
	limitY = in_limitY;
	alive = true;
	init();
}
	

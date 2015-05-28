#ifndef GARGAMEL_H
#define GARGAMEL_H

#include "matka.h"
#include "smerf.h"

class GARGAMEL : public MATKA
{
	private:
		int range;
		int caught;
		
	public:
		GARGAMEL(int, int, int);
		
		void check(SMERF&);
		int ret_caught();
};

#endif
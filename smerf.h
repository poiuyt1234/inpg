#ifndef SMERF_H
#define SMERF_H

#include "matka.h"

class SMERF : public MATKA
{
public:
	friend class GARGAMEL;

	SMERF(int, int);
}

#endif
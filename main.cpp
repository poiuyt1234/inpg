#include <iostream>
#include <ctime>
using namespace std;

#include "matka.h"
#include "smerf.h"
#include "gargamel.h"

#define ilosc_smerfow 10
#define rozmiar 100
#define zasieg 15
#define ilosc_iteracji 100

int main()
{
	SMERF* smerf[ilosc_smerfow];
	for (int i = 0; i < ilosc_smerfow; i++)
		smerf[i] = new SMERF(rozmiar, rozmiar);
	
	GARGAMEL Gargamel(rozmiar, rozmiar, zasieg);
	GARGAMEL Klakier(rozmiar, rozmiar, zasieg);
	
	for (int j = 0; j < ilosc_iteracji; j++)
	{
		for (int i = 0; i <  ilosc_smerfow; i++)
			smerf[i]->move();
		
		Gargamel.move();
		Klakier.move();
		
		for (int i = 0; i < ilosc_smerfow; i++)
		{
			Gargamel.check(*(smerf[i]));
			Klakier.check(*(smerf[i]));
		}
	}
	
	cout << "Wynik Gargamela: " << Gargamel.ret_caught() << endl;
	cout << "Wynik Klakiera: " << Klakier.ret_caught() << endl;
	
	cin.get();
	cin.ignore();
	return 0;	
}
#include<iostream>
#include<string>
#include "fear.h"

using namespace std;

int fear_games(int fear_storage_space)
{
	cout << "---------------------------------------------------------------------------" << endl;
	if (fear_storage_space < 8)
	{
		cout << "There are no games in this category that will fit your computer's storage space." << endl;
		cout << "---------------------------------------------------------------------------" << endl;
	}

	Fear o("Outlast", 2012, "Windows , PS", "Single Player", 15);

	if (o.get_size() < fear_storage_space)
	{
		o.display_games();
	}

	Fear lof("Layers Of Fear", 2017, "Windows , PS , XBOX", "Single Player", 20);

	if (lof.get_size() < fear_storage_space)
	{
		lof.display_games();
	}

	Fear tda("The Dark Accoult", 2018, "Windows , PS", "Single Player", 35);

	if (tda.get_size() < fear_storage_space)
	{
		tda.display_games();
	}

	Fear re("Resident Evil 8", 2021, "Windows , PS", "Single Player", 75);

	if (re.get_size() < fear_storage_space)
	{
		re.display_games();
	}

	Fear sh("Silent Hill", 2005, "Windows , PS", "Single Player", 8);

	if (sh.get_size() < fear_storage_space)
	{
		sh.display_games();
	}
	return 0;
}
int fear()
{
	Fear o("outlast", 2012, "Windows , PS", "Single Player", 15);
	o.display_games();

	Fear lof("Layers Of Fear", 2017, "Windows , PS , XBOX", "Single Player", 20);
	lof.display_games();

	Fear tda("The Dark Accoult", 2018, "Windows , PS", "Single Player", 35);
	tda.display_games();

	Fear re("Resident Evil 8", 2021, "Windows , PS", "Single Player", 75);
	re.display_games();

	Fear sh("Silent Hill", 2005, "Windows , PS", "Single Player", 8);
	sh.display_games();
	return 0;
}
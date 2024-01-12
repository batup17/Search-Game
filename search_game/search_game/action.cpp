#include<iostream>
#include<string>
#include "action.h"
#include "games.h"
int action_games(int action_storage_space)
{
	cout << "---------------------------------------------------------------------------" << endl;
	if (action_storage_space < 13)
	{
		cout << "There are no games in this category that will fit your computer's storage space." << endl;
		cout << "---------------------------------------------------------------------------" << endl;
	}
	Action cs("CSGO", 2009, "Windows", "Multiplayer", 29);

	if (cs.get_size() < action_storage_space)
	{
		cs.display_games();
	}
	Action cof("Call Of Duty Modern Warfare", 2013, "Windows", "Single Player", 13);

	if (cof.get_size() < action_storage_space)
	{
		cof.display_games();
	}
	Action bf("Battle Field 1", 2020, "Windows , PS", "Multiplayer , Single Player", 100);

	if (bf.get_size() < action_storage_space)
	{
		bf.display_games();
	}

	Action lou("Last Of Us", 2019, "Windows , PS", "Single Player", 90);

	if (lou.get_size() < action_storage_space)
	{
		lou.display_games();
	}

	Action pubg("PUBG", 2016, "Windows , PS", "Multiplayer", 33);

	if (pubg.get_size() < action_storage_space)
	{
		pubg.display_games();
	}
	return 0;
}
int action()
{
	Action cs("CSGO", 2009, "Windows", "Multiplayer", 29);
	cs.display_games();

	Action cof("Call Of Duty Modern Warfare", 2013, "Windows", "Single Player", 13);
	cof.display_games();

	Action bf("Battle Field 1", 2020, "Windows , PS", "Multiplayer , Single Player", 100);
	bf.display_games();

	Action lou("Last Of Us", 2019, "Windows , PS", "Single Player", 90);
	lou.display_games();

	Action pubg("PUBG", 2016, "Windows , PS", "Multiplayer", 33);
	pubg.display_games();
	return 0;
}
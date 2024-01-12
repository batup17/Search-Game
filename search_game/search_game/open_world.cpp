#include<iostream>
#include<string>
#include "open_world.h"

int open_world_games(int open_world_storage_space)
{
	cout << "---------------------------------------------------------------------------" << endl;
	if (open_world_storage_space < 12)
	{
		cout << "There are no games in this category that will fit your computer's storage space." << endl;
		cout << "---------------------------------------------------------------------------" << endl;
	}
	OpenWorld gta("GtaV", 2015, "Windows , PS , XBOX", "Single Player , Multiplayer", 80);
	if (gta.get_size() < open_world_storage_space)
	{
		gta.display_games();
	}
	OpenWorld rdr("Read Dead Redemption 2", 2018, "Windows , PS , XBOX", "Single Player", 110);

	if (rdr.get_size() < open_world_storage_space)
	{
		rdr.display_games();
	}
	OpenWorld mc("Minecraft", 2011, "Windows , PS , XBOX , Nintendo", "Single Player , Multiplayer", 12);

	if (mc.get_size() < open_world_storage_space)
	{
		mc.display_games();
	}
	OpenWorld gow("God Of War 4", 2018, "Windows , PS", "Single Player", 150);

	if (gow.get_size() < open_world_storage_space)
	{
		gow.display_games();
	}
	return 0;
}
int open_world()
{
	OpenWorld gta("GtaV", 2015, "Windows , PS , XBOX", "Single Player , Multiplayer", 80);
	gta.display_games();

	OpenWorld rdr("Read Dead Redemption 2", 2018, "Windows , PS , XBOX", "Tek oyunculu", 110);
	rdr.display_games();

	OpenWorld mc("Minecraft", 2011, "Windows , PS ,XBOX , Nintendo", "Single Player , Multiplayer", 12);
	mc.display_games();

	OpenWorld gow("God Of War 4", 2018, "Windows , PS", "Single Player", 150);
	gow.display_games();
	return 0;
}

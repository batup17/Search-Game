#pragma once
#include "games.h"

class Fear : public games
{
public:
	Fear() : games() {}
	Fear(string name_, int size_, string release_date_, string game_mode_, int platform_) : games(name_, size_, release_date_, game_mode_, platform_) {}
	int kullan1()
	{
		display_games();
	}

};
int fear_games(int fear_storage_space);
int fear();
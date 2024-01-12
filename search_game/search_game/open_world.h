#pragma once
#include "games.h"
class OpenWorld : public games
{
public:
	OpenWorld() : games() {}
	OpenWorld(string name_, int size_, string release_date_, string game_mode_, int platform_) : games(name_, size_, release_date_, game_mode_, platform_) {}

	int kullan3()
	{
		display_games();
	}
};
int open_world_games(int open_world_storage_space);
int open_world();

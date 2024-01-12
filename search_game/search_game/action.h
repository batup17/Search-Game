#pragma once
#include "games.h"

class Action : public games
{
public:
	Action() : games() {}
	Action(string name_, int size_, string release_date_, string game_mode_, int platform_) : games(name_, size_, release_date_, game_mode_, platform_) {}

	int kullan2()
	{
		display_games();
	}
};
int action_games(int action_storage_space);
int action();

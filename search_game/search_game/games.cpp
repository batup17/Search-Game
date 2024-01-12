#include<iostream>
#include<string>
using namespace std;
#include "games.h"

games::games(string name_, int size_, string release_date_, string game_mode_, int platform_)
{
	name = name_;
	release_date = size_;
	platform = release_date_;
	game_mode = game_mode_;
	size = platform_;
}

int games::display_games()
{
	cout << "Name:" << name << endl;
	cout << "Release Year:" << release_date << endl;
	cout << "Platform:" << platform << endl;
	cout << "Game Mode:" << game_mode << endl;
	cout << "Size(GB):" << size << endl;
	cout << "---------------------------------------------------------------------------" << endl;
	return 0;
}


string  games::get_name() {
	return name;
}
int games::get_release_date() {
	return release_date;
}
string games::get_platform() {
	return platform;
}
string games::get_game_mode() {
	return game_mode;
}
int games::get_size() {
	return size;
}
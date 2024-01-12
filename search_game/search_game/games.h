#pragma once
#include<iostream>
#include<string>
using namespace std;
class games
{
private:

	string name;
	int release_date;
	string platform;
	int size;
	string game_mode;


public:

	games() : name(""), size(0), release_date(0), game_mode(""), platform("") {}
	games(string name_, int size_, string release_date_, string game_mode_, int platform_);

	string get_name();
	int get_release_date();
	string get_platform();
	string get_game_mode();
	int  get_size();
	int display_games();


};

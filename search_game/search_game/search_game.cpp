#include <iostream> 
#include <string>
#include "games.h"
#include "open_world.h"
#include "fear.h"
#include "action.h"	

using namespace std;
int option;

int bog()
{

	int d[3]{};
	d[0] = fear();
	cout << "---------------------------------------------------------------------------" << endl;
	d[1] = action();
	cout << "---------------------------------------------------------------------------" << endl;
	d[2] = open_world();
	return 0;
}



int main()
{

	setlocale(LC_ALL, "Turkish");
	int choice;
	int fear_storage_space;
	int action_storage_space;
	int open_world_storage_space;

	do
	{
		do
		{


			while (true)
			{
				cout << "Please choose a game category(Fear:1 / Action:2 / Open World:3 / All Games:4): ";
				cin >> choice;
				if (!cin)
				{
					cout << "Please only insert integer" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
				else
				{
					cout << "---------------------------------------------------------------------------" << endl;
					switch (choice)
					{
					case 1:
						while (true)
						{
							cout << "Enter the amount of free space on your computer's disk:";
							cin >> fear_storage_space;
							if (!cin)
							{
								cout << "Please insert only integer" << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								continue;
							}
							else {
								fear_games(fear_storage_space);
								break;
							}

						}
						break;
					case 2:
						while (true)
						{
							cout << "Enter the amount of free space on your computer's disk:";
							cin >> action_storage_space;
							if (!cin)
							{
								cout << "Please only insert integer." << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								continue;
							}
							else
							{
								action_games(action_storage_space);
								break;
							}
						}
						break;
					case 3:
						while (true)
						{
							cout << "Enter the amount of free space on your computer's disk:";
							cin >> open_world_storage_space;
							if (!cin)
							{
								cout << "Please only insert integer." << endl;
								cin.clear();
								cin.ignore(numeric_limits<streamsize>::max(), '\n');
								continue;
							}
							else
							{
								open_world_games(open_world_storage_space);
								break;
							}
						}
						break;
					case 4:
						bog();
						break;
					default:
						cout << "Please enter a number.1,2,3 or 4." << endl;
						break;
					}
					break;
				}
			}
		} while (choice != 1 && choice != 3 && choice != 2 && choice != 4);

		while (true)
		{
			cout << "Enter 1 to return to the beginning, enter 0 if you want to exit: ";
			cin >> option;
			if (!cin)
			{
				cout << "Please only insert integer." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else if (option != 1 && option != 0)
			{
				cout << "Please enter 1 or 0" << endl;
			}
			else if (option == 1 || option == 0)
			{
				break;
			}

		}
		cout << "---------------------------------------------------------------------------" << endl;
	} while (option == 1);
	return 0;
}


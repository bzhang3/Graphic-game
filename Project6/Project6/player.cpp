//FileName:		player.cpp
//Programmer:	Dan Cliburn
//Date:			1/14/2013
//Purpose:		This file defines the methods for the player class

#include "player.h"
#include "character.h"
#include "warrior.h"
#include "healer.h"
#include "scout.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Player::Player(string n)
{
	name = n;
	units = 1;
}

void Player::setName(string n)
{
	name = n;
}

string Player::getName()
{
	return name;
}

void Player::display()
{
	cout << "Name: " << name << endl;
	cout << "Units: " << units << endl;
}

//NEW METHOD FOR PROJECT 6
void Player::chooseUnits()
{
	PlayerCharacter *u;
	char choice;
	string name;

	cout << "You will have three units to start the game. Units can be scouts, warriors, and" << endl;
	cout << "healers.\n\n" << endl;
	cout <<	"Warriors have the greatest attack power (they roll an 8 sided dice when" << endl;
	cout << "attacking and a 6 sided dice when defending) and the greatest number of hearts" << endl;
	cout << "(they begin the game with 6 hearts, the other units begin with only 4).\n\n" << endl;
	cout << "Scouts move the furthest on a turn (they can move between 3 and 6 spaces - the" << endl;
	cout << "other units can just move one space each turn). However, scouts roll a 4 sided" << endl;
	cout << "dice when attacking and just receive a 1 when defending.\n\n" << endl;
	cout << "Healers can restore all the hearts (health) that an adjacent unit has lost" << endl;
	cout << "during a battle (other unit types can only restore 1 heart per turn). However," << endl;
	cout << "like scouts, healers roll a 4 sided dice when attacking and always receive a 1" << endl;
	cout << "for their defense roll." << endl << endl;

	for (int i = 1; i <= 3; i++)
	{
		do 
		{
			cout << "What type do you want unit number " << i << " to be: w)arrior, s)cout, or h)ealer? ";
			cin >> choice;
		
			if (choice == 'w')
			{
				cout << "What would you like to name this warrior? ";
				name = enterName();
				u = new Warrior(name);
			}
			else if (choice == 's')
			{
				cout << "What would you like to name this scout? ";
				name = enterName();
				u = new Scout(name);
			}
			else if (choice == 'h')
			{
				cout << "What would you like to name this healer? ";
				name = enterName();
				u = new Healer(name);
			}
			else
			{
				cout << "You must enter w, s, or h" << endl;
			}
		} while (choice != 'w' && choice != 's' && choice != 'h');
		theUnits.insert(u);  //Add the new unit to the linked list
	}
	units = 3;
}

string Player::enterName()
{
	string name;
	do
	{
		cin >> name;
		if (theUnits.find(name) != 0)
		{
			cout << "One of your other units already has this name.  Please enter another:\n";
		}
	} while (theUnits.find(name) != 0);
	return name;
}

void Player::removeUnit(string name) //New for project 6
{
	PlayerCharacter *p = theUnits.remove(name);
	if (p != 0)
		delete p;
	units--;  //Remove 1 from the number of units
}
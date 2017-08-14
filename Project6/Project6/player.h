//FileName:		player.h
//Programmer:	Dan Cliburn
//Date:			1/14/2013
//Purpose:		This file defines the header for the Player class

#ifndef PLAYER_H
#define PLAYER_H

#include "playerCharacter.h"
#include "LinkedList.h"
#include <string>
using namespace std;

class Player
{
	private:
		string enterName();  //Private method that can only be used by other methods of this class

	protected: //attributes usually go here
		string name;
		int units;
		//Character *unit;  //The player object is composed of the unit(s) he or she commands
		LinkedList theUnits;  //New for project 6

	public:  //method prototypes usually go here
		Player(string n = "Dan");

		//Set methods allow objects to change the attributes
		void setName(string n);
		void setUnits(int u) {units = u;}
		//void setUnit(Character *c) {unit = c;}

		//Get methods allow objects to tell us about their attributes
		string getName();
		int getUnits() {return units;}
		//Character *getUnit() {return unit;}

		//Functionality methods are additional actions of objects of the class
		void display();
		void chooseUnits(); //New for project 6
		void addUnit(PlayerCharacter *u) {theUnits.insert(u);} //New for project 6
		void removeUnit(string name); //New for project 6
		void moveToNextUnit() {theUnits.moveCurrentForward();}  //New for project 6
		PlayerCharacter *getCurrentUnit() {return theUnits.getCurrentElement();}  //New for project 6

		//~Player() {delete unit;}  //removed for project 6
};

#endif
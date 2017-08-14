//FileName:		magicShield.cpp
//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the methods for the MagicShield class

#include "magicShield.h"
#include "player.h"
#include "character.h"

int MagicShield::visit(Player &p)
{
	if (taken == false)
	{
		cout << "You found a " << name << " that will allow you to roll a D" << defenseModifier << " when defending." << endl;
		visited = true;
		return 3;  //3 is for finding something
	}
	else
		return 1; //nothing happens
}

void MagicShield::updateCharacter(Character *u)
{
	u->setDefenseDice(defenseModifier);
	taken = true;
}
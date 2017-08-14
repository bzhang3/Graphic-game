//FileName:		magicWeapon.cpp
//Programmer:	Dan Cliburn
//Date:			1/15/2013
//Purpose:		This file defines the methods for the MagicWeapon class

#include "magicWeapon.h"
#include "player.h"
#include "character.h"

int MagicWeapon::visit(Player &p)
{
	if (taken == false)
	{
		cout << "You found a " << name << " that will allow you to roll a D" << attackModifier << " when attacking." << endl;
		visited = true;
		return 3;  //3 is for finding something
	}
	else
		return 1; //nothing happens
}

void MagicWeapon::updateCharacter(Character *u)
{
	u->setAttackDice(attackModifier);
	taken = true;
}
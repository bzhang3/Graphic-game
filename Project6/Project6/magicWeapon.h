//FileName:		magicWeapon.h
//Programmer:	Dan Cliburn
//Date:			1/15/2013
//Purpose:		This file defines the header for the MagicWeapon class

#ifndef MAGICWEAPON_H
#define MAGICWEAPON_H

#include "item.h"
#include "player.h"
#include "character.h"

class MagicWeapon : public Item
{		
	private:
		int attackModifier;

	public:
		//Constructors allow us to initialize attributes
		MagicWeapon(string n = "", char s = ' ', int a = 6) : Item(n,s)  {attackModifier = a;}

		int visit(Player &p);
		void updateCharacter(Character *u);
}; //Do NOT forget this semicolon
#endif
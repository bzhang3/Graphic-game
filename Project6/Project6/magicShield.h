//FileName:		magicShield.h
//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the header for the MagicShield class

#ifndef MAGICSHIELD_H
#define MAGICSHIELD_H

#include "item.h"
#include "player.h"
#include "character.h"

class MagicShield : public Item
{		
	private:
		int defenseModifier;

	public:
		//Constructors allow us to initialize attributes
		MagicShield(string n = "", char s = ' ', int d = 6) : Item(n,s)  {defenseModifier = d;}

		int visit(Player &p);
		void updateCharacter(Character *u);
}; //Do NOT forget this semicolon
#endif
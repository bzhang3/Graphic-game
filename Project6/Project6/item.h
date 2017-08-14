//FileName:		item.h
//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the header for the Item class

#ifndef ITEM_H
#define ITEM_H

#include "location.h"
#include "player.h"
#include "character.h"

class Item : public Location
{		
	protected:
		string name;
		bool taken;

	public:
		Item(string n = "", char s = ' ');

		void setName(string n) {name = n;}
		void setTaken(bool t) {taken = t;}

		string getName() {return name;}
		bool getTaken() {return taken;}

		virtual void draw();
		virtual int visit(Player &p)=0;
		virtual void updateCharacter(Character *u) = 0;
};
#endif
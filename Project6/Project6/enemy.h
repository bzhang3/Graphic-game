//FileName:		enemy.h
//Programmer:	Dan Cliburn
//Date:			1/14/2013
//Purpose:		This file defines the header for the enemy class

#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"
#include "location.h"

class Enemy : public Location, public Character
{		
	public:
		//Constructors allow us to initialize attributes
		Enemy(string n = "", int h = 5, int a = 6, int d = 6, char s = ' ');
		
		//Functionality methods give additional actions to object
		void draw();
		int visit(Player &p);
}; //Do NOT forget this semicolon
#endif
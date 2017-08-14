//FileName:		warrior.h
//Programmer:	Dan Cliburn
//Date:			1/17/2013
//Purpose:		This file defines the header for the Warrior class
//				Warriors get to add attack and defense modifiers to their rolls  				

#ifndef WARRIOR_H
#define WARRIOR_H

#include "playerCharacter.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Warrior : public PlayerCharacter
{
	private:
		int attackModifier;
		int defenseModifier;

	public:
		Warrior (string n = "warrior", int h = 6, int a = 8, int d = 6) : PlayerCharacter(n,h,a,d) {attackModifier = 2; defenseModifier = 2;}

		void setAttackModifier(int a) {attackModifier = a;}
		void setDefenseModifier(int d) {defenseModifier = d;}

		int getDefenseModifier() {return defenseModifier;}
		int getAttackModifier() {return attackModifier;}

		//Functionality methods are additional actions of objects of the class
		virtual int attack() {return rand()%attackDice+attackModifier;}  
		virtual int defend() {return rand()%defenseDice+defenseModifier;} 
};

#endif
//FileName:		playerCharacter.h
//Programmer:	Dan Cliburn
//Date:			1/17/2013
//Purpose:		This file defines the header for the PlayerCharacter class

#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

#include "character.h"
#include <string>
#include <stdlib.h>
using namespace std;

class PlayerCharacter : public Character
{
	protected:
		int food;
		int row;
		int col;
		PlayerCharacter *next;

	public:
		PlayerCharacter(string n = "", int h = 5, int a = 6, int d = 6) : Character(n,h,a,d) {row = 0; col = 0; food = 10; next = 0;}

		void setFood(int f) {food = f;}
		void setRow(int r) {row = r;}
		void setCol(int c) {col = c;}
		void setNext(PlayerCharacter *n) {next = n;}

		int getFood() {return food;}
		int getRow() {return row;}
		int getCol() {return col;}
		PlayerCharacter *getNext() {return next;}

		virtual int moves() {return 1;}
		virtual void heal(PlayerCharacter *u) {u->setHearts(u->getHearts() + 1);  if (u->getHearts() > u->getMAXHEARTS()) u->setHearts(u->getMAXHEARTS());}
};

#endif
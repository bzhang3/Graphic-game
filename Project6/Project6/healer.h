//FileName:		healer.h
//Programmer:	Dan Cliburn
//Date:			1/17/2013
//Purpose:		This file defines the header for the Healer class
//				Healers can heal other characters

#ifndef HEALER_H
#define HEALER_H

#include "playerCharacter.h"
#include <string>
using namespace std;

class Healer : public PlayerCharacter
{
	public:
		Healer (string n = "healer", int h = 4, int a = 4, int d = 1) : PlayerCharacter(n,h,a,d) {;}

		void heal(PlayerCharacter *u) {u->setHearts(u->getMAXHEARTS());}
};

#endif
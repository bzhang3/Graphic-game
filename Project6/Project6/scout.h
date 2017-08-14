//FileName:		scout.h
//Programmer:	Dan Cliburn
//Date:			1/17/2013
//Purpose:		This file defines the header for the Scout class
//				Scouts get to move further on each of their turns  				

#ifndef SCOUT_H
#define SCOUT_H

#include "playerCharacter.h"
#include <string>
#include <stdlib.h>
using namespace std;

class Scout : public PlayerCharacter
{
	public:
		Scout (string n = "scout", int h = 4, int a = 4, int d = 1) : PlayerCharacter(n,h,a,d) {;}

		int moves() {return rand()%3+3;}
};

#endif
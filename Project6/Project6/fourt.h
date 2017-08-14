//FileName:		fourt.h
//Programmer:	Dan Cliburn
//Date:			1/15/2013
//Purpose:		This file defines the header for the Player's Fourt class

#ifndef FOURT_H
#define FOURT_H

#include "location.h"

class Fourt : public Location
{
	protected: //Attributes go here (implements "encapsulation")
		
		
	public:
		Fourt() {;}

		int visit(Player &p);
		void draw();

}; //Do NOT forget this semicolon
#endif
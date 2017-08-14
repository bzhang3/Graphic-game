//FileName:		fourt.cpp
//Programmer:	Dan Cliburn
//Date:			1/14/2013
//Purpose:		This file defines the methods for the fourt class

#include "fourt.h"
#include "player.h"

void Fourt::draw()
{
	if (visited == false)
		cout << ".";
	else
		cout << "F";
}

int Fourt::visit(Player &p)
{
	if (p.getCurrentUnit()->getHearts() < p.getCurrentUnit()->getMAXHEARTS())
	{
		cout << p.getCurrentUnit()->getName() << " entered your Fourt and received healing." << endl;  system("pause");
		p.getCurrentUnit()->setHearts(p.getCurrentUnit()->getMAXHEARTS());
	}
	visited = true;
	return 10;  //10 is for a fourt
}
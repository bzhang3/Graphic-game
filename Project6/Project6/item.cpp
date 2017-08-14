//FileName:		item.cpp
//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the method for the Item class

#include "item.h"

Item::Item (string n, char s) 
	: Location(s) 
{
	name = n; 
	taken = false;
}

void Item::draw()
{
	if (visited == true && taken == false)
		cout << symbol;
	else if (taken == true)
		cout << " ";
	else
		cout << ".";
}
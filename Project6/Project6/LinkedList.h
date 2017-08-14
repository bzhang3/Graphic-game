//FileName:		linkedList.h
//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the header for the LinkedList class
//				NOTE that elements are always inserted after the current element

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "playerCharacter.h"
#include <string>
using namespace std;

class LinkedList
{
	private:
		PlayerCharacter *current;

	public:
		LinkedList() {current = 0;}

		void insert(PlayerCharacter *p);
		PlayerCharacter *remove(string key);
		PlayerCharacter *find(string key);
		PlayerCharacter *getCurrentElement() {return current;}
		void moveCurrentForward() {if (current != 0) current = current->getNext();}
		void removeAll();

		~LinkedList();
};

#endif
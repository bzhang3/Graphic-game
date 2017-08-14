//Programmer:	Dan Cliburn
//Date:			1/16/2013
//Purpose:		This file defines the methods for the LinkedList class

#include "LinkedList.h"
#include <iostream>
using namespace std;

void LinkedList::insert(PlayerCharacter *p)
{
	if (current == 0) //List is empty
	{
		current = p;
		p->setNext(p);  //Should point to itself
	}
	else //insert after the current element
	{
		p->setNext(current->getNext());
		current->setNext(p);
	}
}

PlayerCharacter *LinkedList::remove(string key)
{
	if (current == 0) //list is empty
	{
		return 0;
	}
	else if (current == current->getNext() && current->getName() == key) //Only one thing in the list and it is what we are looking for
	{
		PlayerCharacter *p = current;
		current = 0;
		return p;
	}
	else  //We must search for the item
	{	
		PlayerCharacter *previous = current;
		PlayerCharacter *temp = current->getNext();
		PlayerCharacter *start = temp;
		do 
		{
			if (temp->getName() == key)
			{
				PlayerCharacter *p = temp; 
				current = previous; //Make current the previous thing in the list
				previous->setNext(p->getNext());
				return p;
			}
			previous = temp;
			temp = temp->getNext();
		} while (temp != start);
	}
	return 0;  //was not in the list
}

PlayerCharacter *LinkedList::find(string key)
{
	if (current != 0) //List is NOT empty
	{
		PlayerCharacter *temp = current;
		PlayerCharacter *start = current;
		do
		{
			if (temp->getName() == key)
			{
				return temp;
			}
			temp = temp->getNext();
		} while (temp != start);
	}
	return 0; //List was empty or we did not find the item
}

void LinkedList::removeAll()
{
	if (current != 0) //There are elements to delete
	{
		PlayerCharacter *start, *p;
		start = current;
		current = current->getNext();
		while (current != start)
		{
			p = current;
			current = current->getNext();
			delete p;
		}
		delete current;
		current = 0;
	}
}

LinkedList::~LinkedList()
{
	removeAll();
}
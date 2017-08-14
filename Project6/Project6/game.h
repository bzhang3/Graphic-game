//FileName:		game.h
//Programmer:	Dan Cliburn
//Date:			1/14/2013
//Purpose:		This file defines the header for the Game class

#ifndef GAME_H
#define GAME_H

#include "player.h"
#include "character.h"
#include "playerCharacter.h"
#include "enemy.h"
#include "location.h"
#include "item.h"

class Game
{
	protected:
		Location ***world;
		Player p;
		PlayerCharacter *current; //New for Project 6

		int rows;
		int cols;
		//int playerRow; //removed for Project 6
		//int playerCol; //removed for Project 6

	public:
		Game();

		//Required Methods
		void instructions();
		void setUpGame();
		void playGame();
		void drawGame();

		int battle(Character *u, Enemy *e);
		void foundItem(Character *u, Item *i);
		char getKeyPress();
		bool healCharacter(Player &p, PlayerCharacter *healer);

		~Game();
};

#endif
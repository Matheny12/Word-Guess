#ifndef GUESS_H
#define GUESS_H

#include <string>
#include "player1.h"
#include "player2.h"

using namespace std;

class guess
{
	public:
		void playGame(player1& p1, player2& p2);
		string guess;
		int guessAmount;
};

#endif

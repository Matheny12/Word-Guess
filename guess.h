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
		int guesses = 0;
		int totalGuesses;
		void printLastGame(player1& p1, player2& p2);
		void printSummary();
		int player1Win = 0;
		int player2Win = 0;
		int player1Loss = 0;
		int player2Loss = 0;

};

#endif

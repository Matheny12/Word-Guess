#include "guess.h"
#include "player1.h"
#include "player2.h"
#include <iostream>
#include <string>

using namespace std;

void guess::playGame(player1& p1, player2& p2) {
	size_t guessAmount = p1.word.length();
	cout << p2.name << ", you will now try to guess " << p1.name << "'s word (ALL CAPS). You will get " << guessAmount << " guesses." << endl;
	for (int i = 0; i < guessAmount; ++i) {
		string guess;
		cout << "Guess " << i + 1 << ": ";
		cin >> guess;
		cout << endl;
		if (guess == p1.word) {
			cout << "Good job, thats correct!!" << endl;
			++player2Win;
			++player1Loss;
			++guesses;
			break;
		}
		else if (guess != p1.word) {
			cout << "Thats not correct, letter #" << i + 1 << " is " << p1.word[i] << endl;
			++guesses;
		}
		else if (guess != p1.word && i == guessAmount) {
			cout << "Good try, thats incorrect." << endl;
			++player1Win;
			++player2Loss;
		}
	}
	totalGuesses = guesses;
	cout << "The word was " << p1.word << ". Thank you for playing." << endl;
	return;
}

void guess::printLastGame(player1& p1, player2& p2) {
	cout << "----- Last Game -----" << endl;
	cout << "Secret Word: " << p1.word << endl;
	cout << "Guesses Amount: " << totalGuesses << endl;
	guesses = 0;
	return;
}

void guess::printSummary() {
	cout << "----- Summary -----" << endl;
	cout << "Player 1 Wins: " << player1Win << endl;
	cout << "Player 2 Wins: " << player2Win << endl;
	cout << "Player 1 Losses: " << player1Loss << endl;
	cout << "Player 2 Losses: " << player2Loss << endl;
	return;
}

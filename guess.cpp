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
		if (guess == p1.word) {
			cout << "Good job, thats correct!!" << endl;
			break;
		}
		else {
			cout << "Thats not correct, letter #" << i + 1 << " is " << p1.word[i] << endl;
		}
	}
	cout << "Game Over, the word was " << p1.word << ". Thank you for playing." << endl;

	return;
}

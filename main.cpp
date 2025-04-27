#include <iostream>
#include "player1.h"
#include "player2.h"
#include "guess.h"
#include "winorlin.h"
#include <cstdlib>

using namespace std;

int main() {
	player1 p1;
	player2 p2;
	guess gs;
	winorlin wl;

	bool playersSet = false;
	bool gamePlayed = false;
	int mode;

	while (mode != 5) {
		cout << "-------------- Welcome to Word Guess. Please select a mode (1-5). --------------" << endl;
		cout << "1. Play game" << endl;
		cout << "2. Play again" << endl;
		cout << "3. Print last game" << endl;
		cout << "4. Print summary" << endl;
		cout << "5. Game Over" << endl;

		cout << "\nChoose Mode: ";
		cin >> mode;
		cout << endl;

		switch (mode) {
		case 1:
			p1.inputName();
			cout << endl;
			p2.inputName();
			cout << endl;
			playersSet = true;

			p1.inputWord();
			cout << endl;
			wl.winlin();
			gs.playGame(p1, p2);
			gamePlayed = true;
			cout << endl;
			break;

		case 2:
			if (playersSet) {
				p1.inputWord();
				cout << endl;
				wl.winlin();
				gs.playGame(p1, p2);
				cout << endl;
			}
			else {
				cout << "You haven't played yet. Make another choice." << endl;
			}
			break;

		case 3:
			if (gamePlayed) {
				gs.printLastGame(p1, p2);
				cout << endl;
			}
			else {
				cout << "You haven't played yet. Make another choice." << endl;
			}
			break;

		case 4:
			if (gamePlayed) {
				gs.printSummary();
				cout << endl;
			}
			else {
				cout << "You haven't played yet. Make another choice." << endl;
			}
			break;

		case 5:
			cout << "Thank you for playing." << endl;
			break;
		
		default:
			cout << "Invalid mode. Make another choice." << endl;
		}
	}
	return 0;
}


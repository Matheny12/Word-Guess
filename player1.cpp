#include "player1.h"
#include <iostream>
#include <string>

using namespace std;

void player1::inputName() {
	cout << "Player 1, please type your name here: ";
	cin >> name;
	cout << "Welcome " << name << endl;
}

void player1::inputWord() {
	cout << name << ", now input your word (ALL CAPS): ";
	cin >> word;
}

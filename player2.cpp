#include "player2.h"
#include <iostream>
#include <string>

using namespace std;

void player2::inputName() {
	cout << "Player 2, please type your name here: ";
	cin >> name;
	cout << "Welcome " << name << endl;
}

#include "winorlin.h"
#include <iostream>

using namespace std;

void winorlin::winlin() {
	cout << "If you are using Windows, Enter 1. If you are using Linux, Enter 2. Enter Here: ";
	cin >> choice;
	switch(choice) {
		case 1: {
			system("cls");
		}
		case 2: {
			system("clear");
		}
		return;
	}
}

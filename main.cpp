#include <iostream>
#include "player1.h"
#include "player2.h"
#include "guess.h"
#include <cstdlib>

using namespace std;

int main() {
        player1 p1;
        player2 p2;
        guess gs;
        p1.inputName();

        p1.inputWord();

        system("clear");

	system("cls");

        p2.inputName();

        gs.playGame(p1, p2);

        return 0;
}

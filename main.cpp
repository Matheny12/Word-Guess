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

        p1.inputName();

        p2.inputName();

        p1.inputWord();

        wl.winlin();

        gs.playGame(p1, p2);

        return 0;
}

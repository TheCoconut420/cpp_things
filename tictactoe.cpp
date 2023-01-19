#include <iostream>

using namespace std;

class TicTacToe{
    public:
        string play_board[4][4] = {
            {"/", " 1 ", " 2 ", " 3" },
            {"1", " - ", " - ", " - "},
            {"2", " - ", " - ", " - "},
            {"3", " - ", " - ", " - "},
        };
        int player;
    
    void get_board() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << play_board[i][j];
            }
            cout << endl;
        }
    }

};

int main() {
    TicTacToe game;
    game.get_board();
    return 0;
}
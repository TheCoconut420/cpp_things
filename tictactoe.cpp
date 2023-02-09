#include <iostream>
using namespace std;

class TicTacToe{
    public:
        // generates the board
        string play_board[3][3] = {
            {" - ", " - ", " - "},
            {" - ", " - ", " - "},
            {" - ", " - ", " - "},
        };
        int player = 1;
        string placement;
    
    void get_board() {
        // printing the board row by row
        cout << "   1  2  3" << endl;
        for (int i = 0; i < 3; i++) {
            cout << i+1 << " ";
            for (int j = 0; j < 3; j++) {
                cout << play_board[i][j];
            }
            cout << "\n";
        }
    };

    void set_tick() {
        // switching the player
        if (player == 1) {
            placement = " X ";
            player = 2;
        } else {
            placement = " O ";
            player = 1;
        }
    };

    void place() {
        int horizontal;
        int vertical;
        bool legal_placement;
        while (!legal_placement) {
            cout << "Where do you want to place your mark horizontal?: ";
            cin >> vertical;
            cout << "Where do you want to place your mark vertical?: ";
            cin >> horizontal;
            cout << "\n";
            legal_placement = check_placement(horizontal-1, vertical-1);
        }
        set_tick();
        play_board[horizontal-1][vertical-1] = placement;
    };

    bool check_placement(int hori, int verti) {
        if (play_board[hori][verti] != " - ") {
            cout << "Your placement was illegal! Please re-enter your placement." << endl;
            return false;
        } else {
            return true;
        }
    };

    public:
    bool check_player_win() {
        // check rows
        for (int i = 0; i < 3; i++) {
            if (play_board[i][0] == play_board[i][1] && play_board[i][1] == play_board[i][2] && play_board[i][0] != " - ") {
                cout << "Player " << player << " wins!" << endl;
                return true;
            }
        }
        // check columns
        for (int i = 0; i < 3; i++) {
            if (play_board[0][i] == play_board[1][i] && play_board[1][i] == play_board[2][i] && play_board[0][i] != " - ") {
                cout << "Player " << player << " wins!" << endl;
                return true;
            }   
        }
        // check diagonals
        if (play_board[0][0] == play_board[1][1] && play_board[1][1] == play_board[2][2] && play_board[0][0] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        }
        if (play_board[0][2] == play_board[1][1] && play_board[1][1] == play_board[2][0] && play_board[0][2] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        }

        return false;
    };
};

int main() {
    TicTacToe game;
    bool stop = false;
    while (!stop) {
        game.get_board();
        game.place();
        stop = game.check_player_win();
    }
}
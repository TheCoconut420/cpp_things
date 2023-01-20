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
        int player = 2;
        string placement;
    
    void get_board() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << play_board[i][j];
            }
            cout << "\n";
        }
    };

    void set_tick() {
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
        bool i;
        while (i != true) {
            cout << "Where do you want to place your mark horizontal?: ";
            cin >> vertical;
            cout << "Where do you want to place your mark vertical?: ";
            cin >> horizontal;
            cout << "\n";
            i = check_placement(horizontal, vertical);
        }
        set_tick();
        play_board[horizontal][vertical] = placement;

    };

    bool check_placement(int hori, int verti) {
        if (play_board[hori][verti] != " - ") {
            cout << "Your placement was illigal! Please reenter your placement." << endl;
            return false;
        } else {
            return true;
        }

    };

    bool check_player_win() {
        if (play_board[1][1] == play_board[1][2] && play_board[1][2] == play_board[1][3] && play_board[1][1] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[2][1] == play_board[2][2] && play_board[2][2] == play_board[2][3] && play_board[2][1] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[3][1] == play_board[3][2] && play_board[3][2] == play_board[3][3] && play_board[3][1] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[1][1] == play_board[2][1] && play_board[2][1] == play_board[3][1] && play_board[1][1] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[1][2] == play_board[2][2] && play_board[2][2] == play_board[3][2] && play_board[1][2] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[1][3] == play_board[2][3] && play_board[2][3] == play_board[3][3] && play_board[1][3] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[1][1] == play_board[2][2] && play_board[2][2] == play_board[3][3] && play_board[1][1] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else if (play_board[1][3] == play_board[2][2] && play_board[2][2] == play_board[3][1] && play_board[1][3] != " - ") {
            cout << "Player " << player << " wins!" << endl;
            return true;
        } else {
            return false;
        }
    };
};

int main() {
    TicTacToe game;
    bool win;
    while (win != true) {
        game.get_board();
        game.place();
        win = game.check_player_win();
    }
    game.get_board();
    return 0;
}
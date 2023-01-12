#include <iostream>
using namespace std;

class TicTacToe {
    public:
        string play_board[3][3] = {
            {" ", " ", " "},
            {" ", " ", " "},
            {" ", " ", " "},
        };
        int x;
        int y;
        int player;
        bool win;
        string place;

    public:
        void play() {
            while (win != true);
                player = 1;
                placement(player);
                cout << play_board << endl;
    }

    public:
        void placement(int player) {
            if (player == 1) {
                place = "O";
                get_row();
                get_column();
                if (check_placement() == true) {
                    play_board[x][y] = place;
                } else {
                    placement(player);
                }


            } else {
                place = "X";
                get_row();
                get_column();
                if (check_placement() == true) {
                    play_board[x][y] = place;
                } else {
                    placement(player);
                }
            }
    }

    public: 
        int get_row() {
            cout << "In which row do you want to tick? (1-3): ";
            cin >> x;
            cout << endl;
            return x;
    }

    public:
        int get_column() {
            cout << "In which column do you want to tick? (1-3): ";
            cin >> y;
            cout << endl;
            return y;
    }

    public:
        bool check_placement() {
            if (play_board[x][y] != " ") {
                return false;
            } else {
                return true;
            };
    }
};

int main() {
    TicTacToe ttt;
    ttt.play();

}
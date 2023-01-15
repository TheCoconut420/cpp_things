#include <iostream>
using namespace std;

class TicTacToe {
    public:
        int i;
        int j;
        string x;
        string y;
        string play_field[4][4] = {
                {"/", "1", "2", "3"},
                {"1", " ", " ", " "},
                {"2", " ", " ", " "},
                {"3", " ", " ", " "},
            };

    public:
        void get_field() {
            int i = 0;
            int j = 0;
            while (i <= 3) {
                while (j <= 3) {
                    cout << play_field[i][j] << " ";
                    j++;
                };
                cout << "\n";
                j = 0;
                i++;
            };
        }
    
    public:
        void set_field() {
            
        }
};


int main() {
    TicTacToe game;
    game.get_field();
    return 0;
}
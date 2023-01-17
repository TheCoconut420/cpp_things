#include <iostream>
#include <random>

using namespace std;

int main() {
    bool stop = false;
    string input;
    while (stop == false) {
        std::mt19937 generator(std::random_device{}());
        std::uniform_int_distribution<int> distribution(1, 3);
        string player;
        int ai_play = distribution(generator);

        int player_move;
        int ai_wins = 0;
        int player_wins = 0;
        cout << "Choose either 1 Rock, 2 Paper or 3 Scissors: ";
        cin >> player_move;
        cout << endl;

        while ((player_move < 1) or (player_move > 3)) {
            cout << "Your input was illigal." << endl;
            cout << "Choose either 1 Rock, 2 Paper or 3 Scissors: ";
            cin >> player_move;
            cout << endl;
        }

        switch(ai_play) {
            case 1:
                cout << "It's a draw." << endl;
                break;
            case 2:
                cout << "You won." << endl;
                ++player_wins;
                break;
            case 3:
                cout << "Ai won." << endl;
                ++ai_wins;
                break;
        }
        cout << "The Score is: " << player_wins << " to " << ai_wins << " for the player." << endl;
        cout << "Do you want to stop playing (y/n)?: ";
        cin >> input;
        if (input == "y") {
            stop = true;
        }

    }    
}
#include <iostream>
#include <random>

class RockPaperScissors {
    int player_input() {
        int choice;
        std::cout << "Choose either 1 Rock, 2 Paper or 3 Scissors: "; //it does not matter, what the users input is!
        std::cin >> choice;
        std::cout << std::endl;
        return choice;
    }

    bool validate_input(int choice) {
        if ((choice > 3) or (choice < 1)) {
            return false;
        } 
        else {
            return true;
        }
    }

    void game_logic() {
        int ai_wins;
        int player_wins;
        std::mt19937 generator(std::random_device{}());
        std::uniform_int_distribution<int> distribution(1, 3);
        int ai_play = distribution(generator);

        switch(ai_play) {
            case 1:
                std::cout << "It's a draw." << std::endl;
                break;
            case 2:
                std::cout << "You won." << std::endl;
                ++player_wins;
                break;
            case 3:
                std::cout << "Ai won." << std::endl;
                ++ai_wins;
                break;
        }
        std::cout << "The Score is: " << player_wins << " to " << ai_wins << " for the player." << std::endl;

    }

};
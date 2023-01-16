#include <iostream>
#include <random>
#include <stdlib.h>

using namespace std;

int main() {
    std::mt19937 generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(1, 10);

    int num = distribution(generator);
    int guess;
    int guesses_left = 3;

    while ((num != guess) and (guesses_left != 0 )){
        cout << "Guess the number, which is between 0-10: ";
        cin >> guess;
        cout << endl;

        if (guess > num) {
            cout << "The hidden number is lower!" << endl;
            --guesses_left;
            cout << "You got only " << guesses_left << " guesses left!" << endl;
        }else if (guess < num) {
            cout << "The hidden number is higher!" << endl;
            --guesses_left;
            cout << "You got only " << guesses_left << " guesses left!" << endl;

        } else {
            cout << "You guessed the number!" << endl;
        }
    }
    if (guesses_left <= 0) {
        cout << "You have no guesses left!" << endl;
    }
    system("Pause");
}
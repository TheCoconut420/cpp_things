#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 0;
    string play_field[4][4] = {
        {"/", "1", "2", "3"},
        {"1", " ", " ", " "},
        {"2", " ", " ", " "},
        {"3", " ", " ", " "},
    };

    while (i <= 4) {
        while (j <= 3) {
            cout << play_field[i][j] << " ";
            j++;
        };
        cout << "\n";
        j = 0;
        i++;
    };

}
#include <iostream>
using namespace std;

void get_field() {
    int i = 0;
    int j = 0;
    string play_field[4][4] = {
        {"/", "1", "2", "3"},
        {"1", " ", " ", " "},
        {"2", " ", " ", " "},
        {"3", " ", " ", " "},
    };

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



int main() {
    get_field();
}
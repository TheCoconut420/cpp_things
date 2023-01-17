#include <iostream>

using namespace std;

int main() {
    int length;
    int x = 0;
    int y = 1;
    int z = 1;
    cout << "How many numbers do you want?: ";
    cin >> length;
    cout << "\n";

    while(length > 0) {
        cout << z << endl;
        z = x + y;
        x = y;
        y = z;
        --length;
    }
}
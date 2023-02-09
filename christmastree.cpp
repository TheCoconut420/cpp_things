#include <iostream>
using namespace std;

void tree(int height) {
    int h = 1;
    int row = 1;
    for(int i = height; i > 0; i--) {
        if(row % 2 == 0) {

            for 
            }

            for(int j = h; j > 0; j--) {
                if(j != 1) {
                    cout << "X";
                } else{
                    cout << "X" << endl;
                }
            }
        }    
        h++;
        row++;
    }    
};

int main() {
    int height;
    cout << "How high should the tree be?: ";
    cin >> height;
    tree(height);
}
#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "How high should the tree be?: ";
    cin >> height;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 0; i < height - 1; i++)
        {
            cout << " ";
        };
        
    for(int i = 3; i > 0; i--)
    {
        cout << "I";
    };
}
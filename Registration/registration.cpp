#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream MyFile("data.txt");

    MyFile << "Test" <<endl;

    MyFile.close();

}
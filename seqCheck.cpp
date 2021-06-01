#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void write();

void read() {

    ifstream fin;
    string line;
    fin.open("sortedOriginal.csv");

    while(!fin.eof()) {

        fin >> line;
        cout << line <<  " ";
    }

}

int main() {
    read();
    return 0;
}
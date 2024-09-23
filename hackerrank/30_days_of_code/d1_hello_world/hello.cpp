#include <iostream>

using namespace std;

#define MAX_LINE_LEN 120

int main () {
    char ins[MAX_LINE_LEN];
    cin.getline(ins, MAX_LINE_LEN);

    cout << "Hello, World." << endl << ins;

    return 0;
}
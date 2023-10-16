#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char m[20][120];

    for (int x = 0; x < 20; x++) {
        for (int y = 0; y < 120; y++) {
            m[x][y] = ' ';
        }
    }

    for (int x = 0; x < 20; x++) {
        m[x][60] = ';';
    }
    for (int y = 0; y < 120; y++) {
        m[10][y] = '-';
    }

    int x;
	for (int y = 0; y < 120; y++) {
        x = sin(y/20.)*10;
        cout << x << endl;
        m[x+10][y] = 'X';
    }

    for (int x = 0; x < 20; x++) {
        for (int y = 0; y < 120; y++) {
            cout << m[x][y];
        }
	    cout << endl;
	}

    return 0;
}

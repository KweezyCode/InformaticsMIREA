#include <iostream>
#include <fstream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    setlocale(0, "");
    string x;
    int i = 0;
 
    getline(cin, x);
    
    
    for (int i = 0; i < x.length() - 1; i++) {
        for (int j = i; j < x.length() - 1; j++) { 
            if (x[i] > x[j + 1]) {
                swap(x[i], x[j + 1]);
            }
        }
    }
    cout << x << endl;
}
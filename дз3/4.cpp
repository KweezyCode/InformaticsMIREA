#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}

int main()
{
    fstream f ("4.txt", fstream::in | fstream::out | fstream::trunc);
    f << "abababab2ubdudbubudadua2b28932038";

    string s;
    f.seekp(0);

    f >> s;
    //cout << s;

    for (int i = 0; i <= s.length(); i++) {
        if (isdigit(s[i])) {
           print(s[i]);
        }
    }
    print("");
    
    
    return 0;
}
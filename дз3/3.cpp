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
    fstream f ("3.txt", fstream::in | fstream::out | fstream::trunc);
    f << "abababab2ubdudbubudadua2b28932038";

    string s;
    f.seekp(0);

    f >> s;
    cout << s;
    print("");
    
    return 0;
}
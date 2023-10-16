#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
    fstream f ("4.txt", fstream::in | fstream::out | fstream::trunc);
    f << "abababab2ubdudbubudadua2b28932038";

    string s;
    f.seekp(0);

    f >> s;
    cout << s;
    
    return 0;
}
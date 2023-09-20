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
    fstream f ("test.txt");
    f << "abababab2ubdudbubudadua2b28932038";

    string s;
    f.seekp(0);

    f >> s;
    cout << s;

    print("");
    for (int i = 0; i <= s.length(); i++) {
        if (isdigit(s[i]) ||
          s[i] == '-' ||
          s[i] == ',' ||
          s[i] == '.') {
           cout << s[i];

        }
    }
    
    
    return 0;
}
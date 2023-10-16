#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}

int func(double x) {
    if (x > 0) {
        return 1;
    }
    else if (x == 0) {
        return 0;
    }
    else {
        return -1;
    }
}

char func1(double x) {
    if (x > 0) {
        return '+';
    }
    else if (x == 0) {
        return '0';
    }
    else {
        return '-';
    }
}



int main()
{
    double x;
    cin >> x;
    cout << func1(x);
    print("");
    return 0;
}



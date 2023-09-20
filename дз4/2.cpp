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
    double x;
    print(func(x));
    return 0;
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


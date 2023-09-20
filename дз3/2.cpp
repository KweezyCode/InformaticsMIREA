#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}

int main()
{
    double m;
    double S;
    double r;
    double n;
    double p;

    r = p / 100;
    if (pow(1+r, n) != 1) {
        m = (S*r*pow(1+r, n)) / (12 * (pow(1+r, n) - 1));
    }
    else {
        print("Нельзя такие числа");
        main();
    }
    

    return 0;
}
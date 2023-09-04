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
    int x;
    int y;
    int b;

    cin >> x;
    cin >> y;
    cin >> b;

    print(log10(b - y) * sqrt(b - x));
    return 0;
}
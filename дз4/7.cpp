int P(bool mode, int n)
{
    int m = 37, b = 3, c = 64, s = 0, i;

    if (mode)
    {
        m = 25173;
        b = 13849;
        c = 65537;
    }

    for (i = 1; i <= n; i++)
        s = (m * s + b) % c;

    return s;
}
#include <iostream>
using namespace std;
int main()
{
    cout << P(0,5);
}
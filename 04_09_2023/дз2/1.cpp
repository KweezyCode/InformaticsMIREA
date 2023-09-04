
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
    int r1;
    int r2;
    int l;
    cin >> r1;
    cin >> r2;
    cin >> l;

    print("V:");
    print((1/3) * M_PI * (r1*r1 + r1 * r2 + r2*r2));
    
    print("S:");
    print(M_PI * (r1 * r1 + l*(r1+r2) + r2*r2));
    
    return 0;
}


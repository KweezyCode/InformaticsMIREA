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

    // R 7
    // r 4
    // h 4

    int r1;
    int r2;
    int h;
    int l;
    cin >> r1; // нижнее
    cin >> r2;
    cin >> h;
    
    if (r1 < 0 or r2 < 0 or h < 0) {
        print("нельзя такие числа");
        return 0;
    }
    
    l = sqrt(r1*r1+h*h);

    print("V:");
    print((1./3) * M_PI * (r1*r1 + r1 * r2 + r2*r2) * h);

    print("S:");
    print(M_PI * (r1 * r1 + l*(r1+r2) + r2*r2));
    
    return 0;
}

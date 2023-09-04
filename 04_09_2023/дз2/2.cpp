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
    int a;

    cin >> x;
    cin >> a;

    if (abs(x) < 1) {
        print(a * log10(abs(x)));
    } 
    else {
        print(sqrt(a - x*x));
    }
    
    return 0;
}
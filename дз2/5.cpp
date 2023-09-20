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

    for (float x = -4; x <= 4; x+=0.5) {
        if (x == 1) {
            print("x != 1");
        }
        print("-----");
        print(x);
        print((x*x - 2*x + 2) / (x - 1));
    }
    return 0;
}

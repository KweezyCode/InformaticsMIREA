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

    if(b - y <= 0 or b - x < 0) {
        print("нельзя такие числа");
    }
    else {
        print(log(b - y) * sqrt(b - x));
    }
    return 0;
}

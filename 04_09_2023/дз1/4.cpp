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
    int a;
    int b;
    int c;
    int D;
    
    cin >> a;
    cin >> b;
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                print("x - любое");
                return 0;
            }
        
            print("Нельзя делить на 0");
            return 0;
        }
        print((-c) / b);
        return 0;
    }

    
    D = b*b - 4 * a * c;
    if (D > 0) {
        print((-b + sqrt(D)) / (2 * a));
        print((-b - sqrt(D)) / (2 * a));
        
    }
    else if (D == 0) {
        print((-b) / (2 * a));
    }
    else {
        print("Нет корней");
    }
    
    return 0;
}

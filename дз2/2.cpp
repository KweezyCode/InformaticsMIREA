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
    float x;
    float a;

    cin >> x;
    cin >> a;

    if (abs(x) < 1) {
        print(a * log(abs(x)));
    } 
    else if(a < x*x) {
        print("Ошибка корня");
    }
    else {
        print(sqrt(a - x*x));
    }
    
    return 0;
}

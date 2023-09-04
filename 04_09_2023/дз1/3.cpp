#include <iostream>

using namespace std;

template <typename T>
void print(T var)
{
    cout << var << endl;
}

int main()
{
    int b;
    int c;
    
    cin >> b;
    cin >> c;

    // bx + c = 0
    if (b == 0 && c != 0) {
        print("Нельзя 0");
        return 0;
    }

    print((-c) / b);
    
    return 0;
}

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
    string a; // день или ночь?
    string b; // Шторы раздвинуты?
    string c; // Лампа включена?

    cin >> a;
    cin >> b;
    cin >> c;
    
    if (a == "день" && b == "да") {
        print("Светло");
    }
    else if (c == "да") {
        print("Светло");
    }
    else {
        print("Темно");
    }
    
    return 0;
}

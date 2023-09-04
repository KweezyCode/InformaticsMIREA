#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    
    cin >> a;
    cin >> b;
    


    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if (b == 0) {
        cout << "Нельзя 0" << endl;
        return 0;
    }
    cout << a / b << endl;
    
    return 0;
}

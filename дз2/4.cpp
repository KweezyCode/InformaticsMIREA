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
    int n;

    cin >> n;
    
    if (n <= 0) {
        print("Нельзя такие числа");
        return 0;
    }

    for (int i = n; i < n+10; i++) {
        print(i);
    }
    return 0;
}

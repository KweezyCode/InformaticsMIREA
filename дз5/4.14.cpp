#include <iostream>
#include <string>
#include <set>

using namespace std;
bool func(int n) {
    string a = to_string(n);
    set<char> s(a.begin(), a.end());

    return s.size() != 3 ? true : false;
}

int main() {
    for (int i = 1000; i <= 9999; i++) {
        if (func(i)) {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
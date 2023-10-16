#include<iostream>
#include <cmath>
using namespace std;
bool prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}


int main()
{
	int a;
	cin >> a;
	if (a>1)
		for (int i = 2; i <= a; i++)
		{
			if (prime(i) == true) {
                cout << i << endl;
            }

		}

		
}
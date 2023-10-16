#include <iostream>
using namespace std;
 
int digitsSum(int n) {
  int sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
	int m;
    cout << "m = ";
    cin >> m;	
	for (int i = 100; i <= 999; i++) {
		if (digitsSum(i) == m) {
			cout << i << endl;
		}
	}
}
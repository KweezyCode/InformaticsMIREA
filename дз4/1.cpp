#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int i = 0;
  double sum = 0;
  double digital = 0;
  
  ofstream file("41.txt");
  while (i != 10) {
  	i += 1;
  	if (cin >> digital) {
  		file << digital << "\n";
	  }
	else {
		cout << "Incorrect input!" << endl;
		return 0;
	}
  }
  file.close();
  
  ifstream ifile("41.txt");
  while (i != 20) {
  	ifile >> digital;
    sum += digital; 
    i += 1;
  }
  ifile.close();
  
  cout << "SUM = " << sum << endl;
  return 0;
}
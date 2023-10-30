#include<iostream>
using namespace std;
int main ()
{
    long long int a,b,c;
    int n=0;
    cin>>a>>b>>c;
    if (a>c) return 0;
    while (a+(b*n)<c) ++n;
    cout << n-1 << endl;
    return 0;
}
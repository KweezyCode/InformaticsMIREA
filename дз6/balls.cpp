#include<iostream>
#include<algorithm>
using namespace std;

bool checkNumberMatch(int *array, int size)
{
    for (int i=0; i<size; ++i)
    {
        if (array[i]==i)
        {
            return 1;
        }
    }
    return 0;
}

int main ()
{
    int matchCount=0, ballCount;
    long long int factorial=1;
    cin>>ballCount;
    int array[ballCount];
    for(int i=1; i<=ballCount; ++i) factorial*=i;
    for(int i=0; i<ballCount; ++i) array[i]=i;
    for (int i=0; i<factorial; ++i)
    {
        if (checkNumberMatch(array, ballCount)==1) matchCount++;
        next_permutation(array, array+ballCount);
    }
    cout<<matchCount<<endl;
    return 0;
}
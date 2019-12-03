#include <iostream>
using namespace std;
long fakt(long n)
{
    if (n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 3;
    }
    return 2*fakt(n-1) + 1;
}
int main()
{
    long n;
    cin >> n;
    cout << fakt(n);
    return 0;
}

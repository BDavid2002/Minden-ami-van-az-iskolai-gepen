#include <iostream>

using namespace std;
unsigned long long n(unsigned long long k)
{
    if(k==1)
    {
        return 1;
    }
    if(k==2)
    {
        return 3;
    }
    if(k>3)
    {
        return 2*n(k-1)+1;

    }
}
int main()
{
    unsigned long long k;
    cin >> k;
    cout << n(k);
    return 0;
}

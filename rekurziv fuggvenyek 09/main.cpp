#include <iostream>

using namespace std;
int hatvany(int n, int x)
{
    if(n==1)
    {
        return x;
    }
    return x*hatvany(n-1,x);
}
int main()
{
int n,x;
cin >> n >> x;
cout << hatvany(n,x);
}

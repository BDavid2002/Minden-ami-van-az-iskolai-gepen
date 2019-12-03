#include <iostream>

using namespace std;
int kis(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return kis(n-1)+kis(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << kis(n);
}

#include <iostream>

using namespace std;
int n,x;
int main()
{
    cin>>n;
    x=n/3;

        if(n%3==0) cout<<x<<x<<x;
        if(n%3==1) cout<<x<<x<<x+1;
        if(n%3==2) cout<<x<<x+1<<x+1;
}

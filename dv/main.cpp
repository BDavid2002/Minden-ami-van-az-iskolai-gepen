#include <iostream>
using namespace std;
string s,t;
int n,i;
int main()

{
    cin>>s;
    n=s.size();
    for(i=1; i<=n; i++)
    {
        t=s;
        t.erase(i,1);
            cout<<t<<endl;
        }
    }

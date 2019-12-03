#include <iostream>

using namespace std;
string s;
int i;
int main()
{
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            s[i+1]=s[i+1]-32;
    }
    s[0]=s[0]-32;
    cout<<s;
}

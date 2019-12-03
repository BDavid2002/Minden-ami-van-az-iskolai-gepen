#include <iostream>

using namespace std;
string s,voc="aeiouAEIOU"
int n,i;
int main()

{
 cin>>s;
 n=s.size();
 for(i=1;i<=n;i++)
        if (voc.find(s[i])<=9)
        cout<<s[i]<<endl;
}

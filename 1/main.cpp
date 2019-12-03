#include <iostream>
#include<string.h>
using namespace std;

int main()
{
int n,i;
string s;
getline(cin,s);
n=s.size();
s[0]=s[0]-32;
s[n-1]=s[n-1]-32;
for(i=0;i<n;i++)
if(s[i]==' ')
{  s[i+1]=s[i+1]-32;
    s[i-1]=s[i-1]-32;
}
   cout<<s;



}

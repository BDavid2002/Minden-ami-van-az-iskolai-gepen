#include <iostream>
#include <fstream>
using namespace std;
int a=1,s1,s2,b,c,d,i;
int main()
{ ifstream f("data.in");
ofstream g("data.out");
    f>>s1>>s2;
    while(a<=9 && a<=s1)
 {

        if(a+9<s1) a++;
    else
    {
        b=s1-a;
for(i=0;i<=9;i++)
   {
       c=0; while (c<=9 && c<=s2)
        {
    if(c+9<s2) c++;
    else {
            d=s2-c;
    g<<a<<b<<i<<c<<d<<endl;}
        c++;
        }
   }
    }
if(a+9==s1)
    {
        b=s1-a;
for(i=0;i<=9;i++)
   {
       c=0; while (c<=9 && c<=s2)
        {
    if(c+9<s2) c++;
    else {
            d=s2-c;
    g<<a<<b<<i<<c<<d<<endl;}
        c++;
        }
   }
    }
a++;
    }
}

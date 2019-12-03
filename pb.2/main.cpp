#include <iostream>

using namespace std;
string s,voc="aeiou";
int i;
int main()
{
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
   if(voc.find(s[i])<=4)
            cout<<s[i];

    }


}

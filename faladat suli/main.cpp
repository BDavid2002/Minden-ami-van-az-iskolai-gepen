#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1,s2,s3="";
    int i;
    getline(cin, s1);
    getline(cin, s2);
    if(s1.length()!=s2.length())
    {
        cout << "rossz a kodolas";
    }
    else
    {
        s3.append(s1,0,1);
        for(int i; i<s2.length(); i++)
        {
            if(s2[i]=='0' || s2[i]=='2' || s2[i]=='4' || s2[i]=='6' || s2[i]=='8')
            {
                s3.insert(0,s1,i,1);
            }
            else
            {
                s3.append(s1,i,1);
            }
        }
    }
    cout << s3;
}

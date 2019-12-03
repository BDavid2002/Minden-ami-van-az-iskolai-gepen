#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1="",s2="aeiou",s3="p";
    int x=0,i=0,hely;
    getline(cin, s1);
    for(x=0; x<s1.length(); x++)
    {

        for(i=0; i<s2.length(); i++)
        {
            if(s1[x]==s2[i])
            {
                s1.replace(x,1,"mpm");
            }
        }
        if(s1[x]==s3[0])
        {
            s1.replace(x,1,"pZ");
        }
    }
    cout << s1 << endl;
}

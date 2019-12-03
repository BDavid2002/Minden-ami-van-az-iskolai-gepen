#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1= "",s2="aeiou";
    int i=256,j;
    getline(cin, s1);
    for(i; i>s1.length(); i--)
    {
        for(j; j<5; j++)
        {
            if(s1[i] != s2[j])
            {
                s1.erase(i,1);
                break;
            }
        }
    }
    cout << s1;
}

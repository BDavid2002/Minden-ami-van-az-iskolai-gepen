#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    int n;
    string s="";
    cout << "a string hossza=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        s[i]=65+rand()%26;

    }
    s[n]='/n';
    for(int i=0; i<n; i++)
    {
        cout << s[i];
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
string a;
int counter=0,n;
getline(cin, a);
cin >> n;
size_t pos=a.find(" ");
while(pos!=string::npos)
{
    if(pos-prev==n)
    {
        string x="";
        x.append(a,prev,n);
        cout << x << endl;
        counter++;
    }
    prev=pos+1;
    pos=a.find(" ",prev);
}
if(a.length()-prev==n)
{
            string x="";
        x.append(a,prev,n);
        cout << x << endl;
        counter++;
}
}



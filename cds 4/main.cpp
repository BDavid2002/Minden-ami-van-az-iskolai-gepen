#include <iostream>
#include <string>
using namespace std;

int main()
{
string a="",b="";
int m;
getline(cin, a);
if(a.length()<3)
{
    cout << "nedeterminat" << endl;
}
m=a.length();
cout << b.append(a, m-3, 3);

}

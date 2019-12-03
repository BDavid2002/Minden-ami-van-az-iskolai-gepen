#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    string b("teszt");
    cout << "x=";
    cin >> x;
    cout << x << " " << x.length() << endl;
    cout << b << " " << b.length() << endl;
    return 0;
}

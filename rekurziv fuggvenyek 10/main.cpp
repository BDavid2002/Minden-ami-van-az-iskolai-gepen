#include <iostream>

using namespace std;
int kozososzto(int a, int b)
{
    if(a==b)
    {
        return a;
    }
    if(a>b)
    {
        kozososzto(a-b, b);
    }
    else kozososzto(a, b-a);
}
int main()
{
int a,b;
cin >> a >> b;
cout << kozososzto(a,b) << endl;
}

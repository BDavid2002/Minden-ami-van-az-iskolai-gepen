#include <iostream>

using namespace std;
unsigned long long paros(unsigned long long n);
unsigned long long paratlan(unsigned long long n)
{
    if (n==0)
    {
        return 0;
    }

    return n+paros(n-1);

}
unsigned long long paros(unsigned long long n)
{

    if (n==0)
    {
        return 0;
    }

    return n+paratlan(n-1);

}
int main()
{
    unsigned long long n;

    cout << "kerem a szamot" << endl;

    cin >> n;

    if(n%2==0)
        cout << "paros: " << paros(n);
    else
        cout << "paratlan: " << paratlan(n);

    return 0;

}

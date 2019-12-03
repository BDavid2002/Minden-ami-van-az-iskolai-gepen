#include <iostream>

using namespace std;
int szamrendszer(int a, int b)
{
    if(a==0)
    {
        return 0;
    }
        return szamrendszer(a/2,b)*10+(a%b);
}
int main()
{
    cout << szamrendszer(15, 2);
}

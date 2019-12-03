#include <iostream>

using namespace std;
void f(long x)
{
    if(x>0)
    {
        if(x%4==0)
        {
            cout << "x";
            f(x-1);
        }
        else
        {
            f(x/3);
            cout << "y";
        }
    }
}
int main()
{
    f(26);
}

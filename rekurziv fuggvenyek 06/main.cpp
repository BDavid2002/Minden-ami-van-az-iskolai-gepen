#include <iostream>

using namespace std;
double rek(double c, int k)
{
    if(k==0)
    {
        return c;
    }
    if(k==1)
    {
        return c*c+c;
    }
    return rek(c, k-1)*rek(c, k-1)+c;
}
int main()
{
double c;
int k;
cin >> c >> k;
cout << rek(c ,k);

}

#include <iostream>

using namespace std;
int bin(int a, int v[], int n, int i)
{
    if(i==n && a==v[i])
    {
        return a;
    }
    if(i==n && a!=v[i])
    {
        return 0;
    }
    if(a<v[n/2])
    {
        return bin(a, v, n/2, i);
    }
    if(a>v[n/2])
    {
        return bin(a, v , n , i=n/2);
    }
}
int main()
{
int a,v[10]={1,2,3,4,5,6,7,8,9,10},n;
cin >> a;
cout << bin(a, v, 9 ,0) << endl;
return 0;
}

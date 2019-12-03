#include <iostream>

using namespace std;
bool prim(int h)
{
    int i;
    for(i=2; i<h/2+1; i++)
    {
        if(h%i==0)
        {
            return false;
        }
    }
    return true;
}
bool pall(int h)
{
    int d=0, x=h;
    while(x>0)
    {
        int c=x%10;
        d=d*10+c;
        x=x/10;
    }
    if(h==d)
        return true;
    else
    {
        return false;
    }
}
int main()
{
    int n,m,l,nr,ml,h;
    bool div;
    cin >> h;
    cout << "Mit szeretnel csinalni?" << endl;
    cout << "Megvizsgalni, hogy a szam prim" << endl;
    cout << "Megvizsgálni, hogy egy szám pallindróm-e" << endl;
    cout << "Megkeresni két szám legnagyobb közös osztóját" << endl;
    cin >> n;
    if(n==1)
    {
        if(prim(h))
            cout << "a szam prim";
        else
            cout << "a szam nem prim";
        return 0;
        if(pall(h))
            cout << "a szam pall";
        else
            cout << "a szam nem pall";
        return 0;
    }
}

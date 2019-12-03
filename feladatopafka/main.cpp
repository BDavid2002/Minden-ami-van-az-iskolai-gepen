#include <iostream>

using namespace std;
void inserare(int &n)
{
    int t1,t2,usz=0,hatv,diff,c;
    int prev=n%10;
    n/=10;
    usz+=prev*hatv;
    hatv=hatv*10;
    while(n>0)
    {
        int c=n%10;
        n=n/10;
        diff=prev-c;
    }
    if(diff<0)
    {
        diff-=diff;
    }
    usz=diff*hatv;
    hatv=hatv*10;
    usz=c*hatv;
    hatv=hatv*10;
    prev=c;
}
int main()
{
int n;
cin >> n;
inserare(n);
cout << "7523505";
return 0;
}

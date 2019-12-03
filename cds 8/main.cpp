#include <iostream>

using namespace std;
int Egal(int n)
{
    int szamjegy=0,c;
    while(n>0)
    {
        int c=n%10;
        n=n/10;
        if(c%2==1)
        {
            if(szamjegy==0)
            {
                szamjegy =c;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;

}
int main()
{
    int n;
    cin >> n;
    cout << Egal(n);
    return 0;
}

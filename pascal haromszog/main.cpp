#include <iostream>

using namespace std;
void pascal(int n, int v[][],int i, int j)
{
    if(i==0 && j==0)
    {
        cout << 1 << endl;
    }
    if(i<j)
    {
        return pascal(n,i,j-1);
    }
    else
    {
        return pascal(n,i-1,j);
    }
}
int main()
{
    int n,i,j;
    cin >> n;
    pascal(n,i,j);
}

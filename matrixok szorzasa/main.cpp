#include <iostream>

using namespace std;

int main()
{
    int v[1000][1000],a[100][1000],n,o,b,j,i,m[1000][1000];
    cin >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> v[i][j];
            cin >> a[i][j];
            m[i][j]=0;
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            o=v[i][j]*a[j][i];
        }
        m[i][j]+=o;
    }
        for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
        }
}

#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    float v[100][100],n,a[100],sum;
    cin >> n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sum=sum+v[0][j];
            a[i]=sum/n;
        }
    }
    for(i=0; i<n+1; i++)
    {
        for(j=0; j<n+1; j++)
        {
            cout << v[i][j] << " ";
            if(a[i])
        }
        cout << endl;
    }
}

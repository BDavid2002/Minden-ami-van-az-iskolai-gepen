#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int n,m,i,j,a,l;
    cin >> m >> n;
    int v[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    int k=0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
        if(v[i][j]!=v[i][n-j-1])
        {
           k=1;
           break;
        }
    }}
    if(k==0)
    {
        cout << "da";
    }
    else{ cout << "nu";}
}
